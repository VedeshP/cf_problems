#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    ll n, d; cin >> n >> d;
    vll vt(n);

    fr (i, 0, n) cin >> vt[i];

    sort(vt.begin(), vt.end(), greater<ll>());
    ll ans = 0;

    ll x = vt[0];
    ll div = ceil((d + 1.0) / x);
    // cout << div << '\n';
    ll start = 0;
    ll end = n - 1;
    ll left = end - start + 1;
    // cout << left << '\n';
    while (div <= left)
    {
        ans++;
        // div--;
        start++;
        // vt.erase(vt.begin());
        end -= div - 1;

        left = end - start + 1;

        // while (div--)
        // {
        //     vt.pop_back();
        // }
        // fr (i, start, end + 1) cout << vt[i] << ' ';
        // cout << '\n';

        if (end < start || start >= n || end < 0)
        {
            break;
        }

        div = ceil((d + 1.0) / vt[start]);
    }

    cout << ans << '\n';
}

int main(void)
{
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}
