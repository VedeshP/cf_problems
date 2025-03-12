#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x; cin >> n;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 != 0) odd++;
    }
    if (odd % 2 == 0)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
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