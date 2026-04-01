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
    // i can do this - jai shree ram 
    ll n; cin >> n;

    fr (i, 0, n - 1)
    {
        ll l = 2 * i + 1;
        ll r = 2 * i + 2;

        // cout << l << ' ' << r << '\n';
        cout << '?' << ' ' << l << ' ' << r << '\n';
        fflush(stdout);

        ll ans; cin >> ans;

        if (ans == -1) exit(-1);
        if (ans == 1)
        {
            cout << '!' << ' ' << l << '\n'; fflush(stdout); return;
        }
    }

    ll x = 2 * n - 1, y = 2 * n;

    // cout << '?' << ' ' <<  << '\n';
    cout << '?' << ' ' << x << ' ' << 1 << '\n';
    fflush(stdout);

    ll ans1; cin >> ans1;
    if (ans1 == -1) exit(-1);
    if (ans1 == 1)
    {
         cout << '!' << ' ' << x << '\n'; fflush(stdout); return;
    }

    cout << '?' << ' ' << x << ' ' << 2 << '\n';
    fflush(stdout);
    ll ans2; cin >> ans2;
    if (ans2 == -1) exit(-1);
    if (ans2 == 1)
    {
         cout << '!' << ' ' << x << '\n'; 
         fflush(stdout); return; 
    }

    cout << '!' << ' ' << y << '\n';
    fflush(stdout);
    return;
}

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}
