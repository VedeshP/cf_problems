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
    vector<pll> a(n); 
    fr (i, 0, n)
    {
        cin >> a[i].F;
        a[i].S = i;
    }
    vector<pll> b(n); 
    fr (i, 0, n)
    {
        cin >>b[i].F;
       b[i].S = i;
    }
    vector<pll> c(n); 
    fr (i, 0, n)
    {
        cin >> c[i].F;
        c[i].S = i;
    }

    
    revsrt(a)    ;
        revsrt(b);
        revsrt(c) ;

    ll ans = -1;
    fr (i, 0, 3)
    {
        fr (j, 0, 3)
        {
            fr(k, 0, 3)
            {
                if (a[i].S != b[j].S && b[j].S != c[k].S && a[i].S != c[k].S)
                {
                    ans = max(ans, a[i].F + b[j].F + c[k].F);
                }
            }
        }
    }
    cout << ans << '\n';
    // in brute force wil have to do 
    // abc, bac, acb, cab, cba, bca
    // find max of first, then compatible second, based on both find compatible third

    // i am going to try this one - to see what happens

    // vll ans(n);
    // fr (i, 0, n)
    // {
    //     // when one is chosen - it cannot be chosed again - i have to code that
    //     ans[i] = max(max(a[i], b[i]), c[i]);
    // }
    // revsrt(ans);
    // cout << ans[0] + ans[1] + ans[2] << '\n';
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
