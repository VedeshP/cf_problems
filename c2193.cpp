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

void solve()
{
    ll n, q; cin >> n >> q;
    vll a(n), b(n); inp(a, n); inp(b , n);
    vll c(n);
    
    fr (i, 0, n)
    {
        c[i] = max(a[i], b[i]);
    }
    vll d = c;
    _fr (i, n - 2, -1)
    {
        d[i] = max(d[i], d[i + 1]);
    }
    vll pre(n + 1, 0);
    fr (i, 0, n)
    {
        pre[i + 1] = pre[i] + d[i];
    }
    // if (n == 1)
    // {
    //     fr (i, 0, q)
    //     {
    //         cout << max(a[0], b[0]) << ' ';
    //     }
    //     cout << '\n';
    //     return;
    // }
    // vll pre(n); 
    // pre[0] = max(a[1], b[0]);
    // fr (i, 1, n - 1)
    // {
    //     pre[i] = pre[i - 1] + max(a[i + 1], b[i]);
    // }
    // pre[n - 1] = pre[n - 2] + max(a[n - 1], b[n - 1]);
    fr (i, 0, q)
    {
        ll l, r; cin >> l >> r;
        cout << pre[r] - pre[l - 1] << ' ';
    }
    cout << '\n';
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
