#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    int two = 0, tot = 0 ,ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2) tot++;
    }
    // mf - a contains only 1 and 2 - read the problem thoroughly first 
    // ll has 2^63 as max value
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2) two++;
        if (two == tot - two) 
        {
            ans = ++i; break;
        }
    }
    cout << ans << '\n';
    // int i = 0, j = n - 1;
    // ll right = a[j], left = a[0];
    // while (j > i)
    // {
    //     if (right <= left)
    //     {
    //         // cout << "j: " << j << '\n';
    //         j--;
    //         right *= a[j];
    //     }
    //     else 
    //     {
    //         // cout << "i: " << i << '\n';
    //         i++;
    //         left *= a[i];
    //     }
    // }
    // // cout << right << " " << left << '\n'; 
    // if (i >= n - 1) cout << -1 << '\n';
    // else cout << ++i << '\n';
}

int main(void)
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        solve();
    }
}