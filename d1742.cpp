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

// remember that the below is an array of vectors - nice solution
vll pairs[1001];
// vll pairs(1001);
void solve()
{
    ll n; cin >> n;
    // vll a(n); inp(a, n);

    vll idx(1001, 0);
    fr (i, 0, n)
    {
        ll x; cin >> x;
        idx[x] = i + 1;
    }

    ll ans = -1;
    fr (i, 1, 1001)
    {
        if (idx[i] == 0) continue;

        for (auto j : pairs[i])
        {
            if (idx[j] != 0)
            {
                ans = max(ans, idx[i] + idx[j]);
            }
        }
    }
    cout << ans << '\n';

    // these precomputation problems 

    // ll ans = -1;
    // ll l = n - 1, r = n - 1;
    // while (l >= 0)
    // {
    //     if (gcd(a[l], a[r]) == 1)
    //     {
    //         ans = max(ans, l + r);
    //     }
    //     l--;
    // }
    // cout << ans + 2 << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // precomputing pairs
    fr (i, 1, 1001)
    {
        fr (j, 1, 1001)
        {
            if (gcd(i, j) == 1)
            {
                pairs[i].PB(j);
            }
        }
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}
