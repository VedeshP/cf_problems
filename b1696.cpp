#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (int i = a; i < b; i++)
#define _fr(i, a, b) for (int i = a; i > b; i--)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>

using namespace std;

void solve()
{
    int n; cin >> n;
    vi a(n);
    fr(i, 0, n) cin >> a[i];
    int ans = 0;
    if (a[0] != 0) ans++;
    fr(i, 1, n)
    {
        if (a[i] != 0 && a[i - 1] == 0)
        {
            ans++;
        }
    }
    if (ans == 1) cout << ans << '\n';
    else if (ans == 0) cout << ans << '\n';
    else cout << 2 << '\n';
}

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}