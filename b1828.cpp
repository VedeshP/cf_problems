#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (int i = a; i < b; i++)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <limits.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    int min_dev = 0;
    fr(i, 0, n)
    {
        int x; cin >> x;
        min_dev = gcd(min_dev, abs(x - (i + 1)));
        // if (abs(x - (i + 1))) min_dev = min(min_dev, abs(x - (i + 1)));
        // cout << x << ' ';
    }
    cout << min_dev << '\n';
    // if (min_dev == INT_MAX) cout << 0 << '\n';
    // else cout << min_dev << '\n';
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