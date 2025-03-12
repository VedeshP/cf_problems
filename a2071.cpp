#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    if ((n - 1) % 3 == 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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