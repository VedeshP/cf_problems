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
    ll n; cin >> n; char c; cin >> c;
    string s; cin >> s;
    bool full = true;
    vll ans;
    fr (i, 0, n)
    {
        if (s[i] != c) 
        {
            full = false;
        }
    }

    if (!full)
    {
        fr (i, 1, n + 1)
        {
            full = true;
            fr (j, i, n + 1)
            {
                full &= (s[j - 1] == c);
                j += i - 1;
            }
            if (full)
            {
                ans.PB(i);
                break;
            }
        }
        if (!full)
        {
            ans.PB(n);
            ans.PB(n - 1);
        }
    }

    cout << sz(ans) << '\n';
    for (auto x : ans)
    {
        cout << x << ' ';
    }
    cout << '\n';
    // if (full) 
    // {
    //     cout << 0 << '\n';
    //     return;
    // }
    // if (s[n - 1] == c)
    // {
    //     cout << 1 << '\n';
    //     cout << n << '\n';
    // }
    // else {
    //     if (s[n - 2] == c)
    //     {
    //         cout << 1 << '\n';
    //         cout << n - 1 << '\n';
    //     }
    //     else {
    //         cout << 2 << '\n';
    //         cout << n << ' ' << n - 1 << '\n';
    //     }
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
