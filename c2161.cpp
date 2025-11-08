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
    ll n,x ; cin >> n >> x;
    vll a(n); inp(a, n);

    // srt(a);
    // ll p = 0, s = 0;
    // ll lo = 0;
    // fr (i, 0, n)
    // {
    //     s += a[i];
    //     if (lo < s / x)
    //     {
    //         p += a[i];
    //     }
    //     lo = s / x;
    // }
    // cout << p << '\n';
    // outp(a, n);

    // srt(a);
    // vll ans(n);
    // ll i = 0;
    // ll s = 0;
    // while (s < x && i < n)
    // {
    //     ans[i] = a[i];
    //     s += a[i];
    //     i++;
    // }

    // sort(a.begin() + i, a.end(), greater<ll>());
    // ll p = 0;
    // fr (x, i, n)
    // {
    //     ans[x] = a[x];
    //     // p += a[x];
    // }

    // ll sum = 0;
    // ll lo = 0;
    // fr (i, 0, n)
    // {
    //     sum += ans[i];
    //     if (lo < sum/x)
    //     {
    //         p += ans[i];
    //     }
    //     lo = sum / x;
    // }
    // cout << p << '\n';
    // outp(ans, n);

    multiset<ll> mst(a.begin(), a.end());
    ll s = 0, p = 0;
    vll ans;

    while (!mst.empty())
    {
        ll r = s % x;
        ll need = (r == 0) ? x : x - r;

        auto it = mst.lower_bound(need);
        ll take;
        if (it != mst.end())
        {
            auto it_max = prev(mst.end());
            take = *it_max;
            mst.erase(it_max);
            p += take;
        }
        else 
        {
            auto it_min = mst.begin();
            take = *it_min;
            mst.erase(it_min);
        }
        ans.PB(take);
        s += take;
    }

    cout << p << '\n';
    outp(ans, n);


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
