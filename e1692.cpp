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
    ll n, s; cin >> n >> s;
    vll a(n); inp(a, n);
    vll pref(n);
    pref[0] = a[0];
    fr (i, 1, n)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    // for each l we are finding the r such that xsum(l, r) == s and we store the min operations required
    ll ans = LONG_MAX;
    fr (i, 0, n)
    {
        ll l = i, r = n - 1, p = -1;
        while (l <= r)
        {
            // ll sum = pref[r] - (l == 0 ? 0 : pref[l - 1]);
            ll mid = l + (r - l) / 2;
            if (xsum(i, mid, pref) <= s)
            {
                p = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        if (p == -1 || xsum(i, p, pref) != s) continue;
        ans = min(ans, (n - (p - i + 1))); // i.e. l - r + 1
    }
    cout << (ans == LONG_MAX ? -1 : ans) << '\n';
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
