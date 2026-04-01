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

// ll func()
// {

// }
void solve()
{
    ll n, q; cin >> n >> q;
    vll a(n), k(q);
    inp(a, n); inp(k, q);

    vll pre(n, 0), max_pre(n, 0);
    pre[0] = a[0];
    max_pre[0] = a[0];
    // know that my leg length must be greater than the max height from 0 to mid
    fr(i, 1,n)
    {
        pre[i] = pre[i - 1] + a[i];
        max_pre[i] = max(max_pre[i - 1], a[i]);
    }
    fr (i, 0, q)
    {
        ll l = 0, r = n - 1, ans = -1, mid = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (max_pre[mid] <= k[i])
            {
                ans = mid; l = mid + 1;
            }
            else if (max_pre[mid] > k[i]) 
            {
                r = mid - 1;
            }
        }
        if (ans == -1) cout << 0 << ' ';
        else cout << pre[ans] << ' ';
        // cout << ans << ' ';
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
