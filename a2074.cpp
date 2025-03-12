#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int l, r, d, u; cin >> l >> r >> d >> u;
    if (l == r && r == d && d == u && u == l) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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