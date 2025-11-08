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
    ll x = n * (n - 1) / 2;
    vll b(x); inp(b, x);

    srt(b);
    for (int i = 0; i < x; i += --n)
    {
        cout << b[i] << ' ';
    }
    ll num = 1e9;
    cout << num << '\n';
    // ll mx = INT_MIN;
    // map<ll, ll> mp;
    // set<ll> st;
    // fr (i, 0, x)
    // {
    //     st.insert(b[i]);
    //     mp[b[i]]++;
    //     mx = max(mx, b[i]);
    // }
    // vll ans(all(st));
    // ll d = sz(ans);
    // fr (i, 0, d)
    // {
    //     cout << mp[ans[i]] << ' ';
    //     if (mp[ans[i]] >= n) 
    //     {
    //         ans.PB(ans[i]);
    //     }
    // }
    // cout << '\n';
    // while (sz(ans) != n)
    // {
    //     ans.PB(1e9);
    // }
    // outp(ans, n);
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
