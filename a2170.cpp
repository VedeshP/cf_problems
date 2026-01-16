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
    ll n; cin >> n;
    n++;
    // how ?
    vector<vll> a(n + 2, vll(n + 2));
    fr (i, 0, n)
    {
        a[i][0] = 0;
        a[0][i] = 0;
        a[n + 1][i] = 0;
        a[i][n + 1] = 0;
    }
    ll cnt = 0;
    fr (i, 1, n)
    {
        fr (j, 1, n)
        {
            a[i][j] = ++cnt;
        }
    }
    ll ans = 0;
    fr (i, 1, n)
    {
        fr (j, 1, n)
        {
            ll curr = a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i + 1][j] + a[i][j + 1];
            ans = max(ans, curr);
        }
    }
    cout << ans << '\n';
    // if ( n== 1) {
    //     cout << 1 << '\n'; return;
    // }
    // if (n == 2)
    // {
    //     cout << 9 <<'\n'; return;
    // }
    // cout << (n * n) + (n * n - 1) + (n * n - 2) + (n * n - n - 1) << '\n';
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
