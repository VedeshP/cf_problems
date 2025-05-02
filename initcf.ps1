param (
    [Parameter(Mandatory = $true)]
    [string]$newfile
)

$templatefile = "initial_temp.cpp"
# $templatefile = "initialtemp.cpp"

if (-Not (Test-Path $newfile))
{
    if (Test-Path $templatefile)
    {
        Get-Content $templatefile | Set-Content $newfile
        # Note that cat is in alias for Get-Content only in interactive powershell
        Write-Host "Created '$newfile' from template '$templatefile'"
    }
    else
    {
        Write-Error "Template file '$templatefile' not found!"
        exit 1
    }
}
else 
{
    Write-Host "'$newfile' already exists. Opening it!"
}

code $newfile