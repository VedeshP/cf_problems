#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve()
{
    int n, k, p; cin >> n >> k >> p;
    int x = (abs(k) / p);
    if (abs(k) % p) x++;
    if (x <= n) cout << x << '\n';
    else cout << -1 << '\n';
    return;
}

int main(void)
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        // cout << i << '\t';
        solve();
    }
}