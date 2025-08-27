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
    ll n, c; cin >> n >> c;
    vll vt(n); fr (i, 0, n) cin >> vt[i];

    // ll l = 0, r = LLONG_MAX / 2, ans = r;
    ll l = 1, r = 1e9, ans = r;
    // i dont know but this only works with r = 1e9
    while (l <= r)
    {
        ll sum = 0;
        // ll mid = (l + r) / 2;
        ll m = l + (r - l) / 2;
        // the above line is to specifically avoid overflow
        fr (i, 0, n)
        {
            sum += ((vt[i] + 2 * m) * (vt[i] + 2 * m));
            if (sum > c) break;
        }
        if (sum < c)
        {
            l = m + 1;
        }
        else if (sum == c)
        {
            cout << m << '\n';  return;
            // cout << "huha";
        }
        else 
        {
            // ans = m;
            r = m - 1;
        }
    }
    // cout << l << '\n';
    return;
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
