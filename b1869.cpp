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

void solve()
{
    ll n,k,a,b; cin >> n >> k >> a >> b;
    vector<pll> vt(n); fr (i ,0, n) {
        cin >> vt[i].F >> vt[i].S;
    }
    a--; b--;
    if (k == 0)
    {
        cout << abs(vt[a].F - vt[b].F) + abs(vt[a].S - vt[b].S) << '\n';
        return;
    }
    // if (a <= k && b <= k)
    // {
    //     cout << 0 << '\n'; return;
    // }
    ll ans = abs(vt[a].F - vt[b].F) + abs(vt[a].S - vt[b].S);
    ll aclose = LLONG_MAX / 2, bclose = LLONG_MAX / 2;
    //  /2 in above is to prevent overflow
    fr (i, 0, k)
    {
        aclose = min(aclose, (abs(vt[a].F - vt[i].F) + abs(vt[a].S - vt[i].S)));
        bclose = min(bclose, (abs(vt[b].F - vt[i].F) + abs(vt[b].S - vt[i].S)));
    }
    cout << min(ans, aclose + bclose) << '\n';
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
