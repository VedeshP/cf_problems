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
    vll a(n); inp(a, n);

    bool srte = true;
    fr (i, 0, n - 1)
    {
        if (a[i] <= a[i + 1]) continue;
        else 
        {
            srte = false;
        }
    }
    if (a[n - 2] > a[n - 1])
    {
        cout << -1 << '\n';
    }
    else 
    {
        if (a[n - 1] < 0)
        {
            if (srte)
            {
                cout << 0 << '\n';
            }
            else 
            {
                cout << -1 << '\n';
            }
        }
        else 
        {
            cout << n - 2 << '\n';
            fr (i, 1, n - 1)
            {
                cout << i << ' ' << n - 1 << ' ' << n << '\n';
            }
        }
    }
    // if (srte)
    // {
    //     if (a[n - 1] )
    //     cout << 0 << '\n';
    //     return;
    //     else 
    // {
    //     cout << -1 << '\n';
    //     return;
    // }
    // }
    

    // if (a[n - 1] < a[n - 2])
    // {
    //     cout << -1 << '\n';
    //     return;
    // }

    // // cout << ceil(n * 1.0 / 3) << '\n';
    // cout << n - 2 << '\n';
    // ll i = 1;
    // while (i <= n - 2)
    // {
    //     cout << i << ' ' << n - 1 << ' ' << n << '\n'; 
    //     i+=2;
    // }
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
