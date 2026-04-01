#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define sz(x) (ll)(x).size()
#define srt(a) sort((a).begin(),(a).end())
#define revsrt(a) sort((a).rbegin(), (a).rend())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define setbits(x) __builtin_popcountll(x)
ll MOD=1000000007;

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

#define inp(a, n) fr(i, 0, n) cin >> a[i];
#define outp(a, n) fr(i, 0, n) { cout << a[i] << ' '; } cout << '\n';

#define out_NO cout << "NO" << '\n';
#define out_YES cout << "YES" << '\n';

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <algorithm>
#include <functional>
#include <queue> // also has priority queue
#include <deque>
#include <iomanip> // required for setprecision
#include <stack>
#include <numeric>
#include <string>
#include <limits.h>
#include <cmath>
#include <cctype>
#include <map>
#include <set>

using namespace std;

int gcd(int a,int b)
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int a,int b)
{
    return a * b / gcd(a, b);
}

ll xsum(ll l, ll r, vll& pref)
{
    return pref[r] - (l == 0 ? 0 : pref[l - 1]);
}

void solve()
{
    ll n, x; cin >> n >> x;
    vll a(n); inp(a,n);
    srt(a);
    // vll pref(n);
    // pref[0] = a[0];
    // fr (i, 1, n)
    // {
    //     pref[i] = pref[i - 1] + a[i];
    // }
    // ll day = 0;
    // ll ans = -1;
    // while (x < a[0] + day)
    // {
    //     ll l = 0, r = n - 1, p = -1;

    //     while (l <= r)
    //     {
    //         ll mid = l + (r - l) / 2;
    //         if (xsum(l, mid, pref) + day * (mid - l + 1) <= x)
    //         {
    //             p = mid;
    //             l = mid + 1;
    //         }
    //         else
    //         {
    //             r = mid + 1;
    //         }
    //     }
    //     if (p == -1 || xsum(l, p, pref) + day * (p - l + 1) != x) break;
    //     ans = max(ans, p - l + 1);
    //     day++;
    // }

    ll ans = 0ll;
    ll sum = accumulate(all(a), 0ll);
    ll prev = -1ll;
    _fr (i, n - 1, -1)
    {
        ll currday = (x - sum >= 0) ? (x - sum) / (i + 1) : -1;
        ans += (currday - prev) * (i + 1);
        prev = currday;
        sum -= a[i];
    }

    cout << ans << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}
