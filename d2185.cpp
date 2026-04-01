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
    ll n, m, h; cin >> n >> m >> h;
    vll a(n); inp(a, n);
    vll x(all(a));
    // vll x = a;
    // vector<pair<ll, ll>> v(n, {-1, -1});
    // vector<pair<ll, ll>> bc()
    // fr (i, 0, m)
    // {

    // }

    vector<pair<ll, ll>> v(n, {0, 0});
    fr (i, 0, n)
    {
        v[i] = {a[i], 0};
    }
    // fr (i, 0, m)
    // {
    //     ll b, c; cin >> b >> c;

    // }
    int currt = 0;
    fr (i, 0, m)
    {
        ll b, c; cin >> b >> c;
        ll curr_val;

        if (v[b - 1].S == currt)
        {
            curr_val = v[b - 1].F;
        }
        else {
            curr_val = a[b - 1];
        }
        ll next = curr_val + c;
        if (next > h)
        {
            currt++;
        }
        else 
        {
            v[b - 1] = {next, currt};
        }
    }
    fr (i, 0, n)
    {
        if (v[i].S == currt)
        {
            cout << v[i].F << ' ';
        }
        else 
        {
            cout << a[i] << ' ';
        }
    }
    cout << '\n';

    // fr (i, 0, m)
    // {
    //     ll b, c; cin >> b >> c;
        
    //     // alwasy remember it is 1 indexed as per the que
    //     if (a[b - 1] + c >= h)
    //     {
    //         a[b - 1] = x[b - 1];
    //     }
    //     else 
    //     {
    //         a[b - 1] += c;
    //     }
    // }
    // outp(a, n);

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
