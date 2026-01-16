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


    // since it is a permutation - it changes a lot of things 

    ll l = 0, r = n - 1;
    ll mn = 1, mx = n;

    while (l <= r)
    {
        if (a[l] == mn)
        {
            l++;
            mn++;
        }
        else if (a[l] == mx)
        {
            l++;
            mx--;
        }
        else if (a[r] == mn)
        {
            r--;
            mn++;
        }
        else if (a[r] == mx)
        {
            r--;
            mx--;
        }
        else break;
    }
    if (l <= r)
    {
        cout << l + 1 << ' ' << r + 1 << '\n';
    }
    else cout << -1 << '\n';

    // if (n < 4)
    // {
    //     cout << -1 << '\n';
    //     return;
    // }

    // vll pmx(n, 0);
    // vll pmn(n, 0);

    // pmx[0] = a[0];
    // pmn[0] = a[0];
    // fr (i, 1, n)
    // {
    //     pmx[i] = max(a[i], pmx[i - 1]);
    //     pmn[i] = min(a[i], pmn[i - 1]);
    // }

    // vll smx(n, 0), smn(n, 0);
    // smn[n - 1] = a[n- 1];
    // smx[n - 1] = a[n - 1];

    // _fr(i, n, -1)
    // {
    //     smx[i] = max(a[i], smx[i + 1]);
    //     smn[i] = min(a[i], smn[i + 1]);
    // }

    // ll l = -1, r = -1;
    // fr (i, 0, n)
    // {
    //     if (a[i] != pmn[i] && a[i] != pmx[i])
    //     {
    //         l = i;
    //         break;
    //     }
    // }
    // fr (i, l + 1, n)
    // {
    //     if (a[i] != pmn[i] && a[i] != pmx[i])
    //     {
    //         r = i;
    //         break;
    //     }
    // }
    // if (l == -1 || r == -1)
    // {
    //     cout << -1 << '\n';
    //     return;
    // }
    // cout << l + 1 << ' ' << r + 1 << '\n';
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
