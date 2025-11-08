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
    // gcd ki feel kyu ari ?
    // vll arr = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    ll n; cin >> n;
    vll a(n); inp(a, n);

    set<ll> st;
    ll k = 2;
    while (k<1e18)
    {
        fr (i, 0, n)
        {
            st.insert(a[i] % k);
            if (sz(st) > 2)
            {
                st.clear();
                break;
            }
        }
        if (sz(st) == 2)
        {
            cout << k << '\n';
            return;
        }
        else
        {
            st.clear();
        }
        k *= 2;
    }
    // fr (i, 0, sz(arr))
    // {
    //     fr (j, 0, n)
    //     {
    //         st.insert(a[j] % arr[i]);
    //     }
    //     if (sz(st) != 2)
    //     {
    //         st.clear();
    //     }
    //     else
    //     {
    //         cout << arr[i] << '\n';
    //         return;
    //     }
    // }
    // bhai agar ye solve ho gaya na 
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
