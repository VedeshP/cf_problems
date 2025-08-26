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
    ll n; cin >> n;
    vector<pll> vt(n);
    fr (i, 0, n) 
    {
        cin >> vt[i].F;
        vt[i].S = i;
    }
    vll ans(n, 0);
    revsrt(vt);
    vll pre(n + 1, 0);
    pre[1] = vt[0].F;
    fr (i, 1,n + 1)
    {
        pre[i] = vt[i - 1].F + pre[i - 1];
    }

    // fr (i,0,n+1) cout << pre[i] << ' ';
    // cout << '\n';

    // can implement a binary search solution - finding the rightmost number less than x
    // complexity is expected fr this implementation to be nlogn - check below 

    // _fr(i, n - 1, -1)
    fr (i, 0, n)
    {
        ll currsum = pre[i + 1];
        ll l = i, r = n - 1;
        while (l < r)
        {
            // ll mid = l + (r - l) / 2;
            ll mid = (l + r) / 2;
            if (vt[mid].F < currsum)
            {
                l = mid + 1;
            }
            else 
            {
                r = mid;
            }
        }
        ans[vt[i].S] = l;
    }

    fr (i, 0, n) cout << ans[i] << ' ';
    cout << '\n';

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
