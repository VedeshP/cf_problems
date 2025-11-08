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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    ll ans = 0;
    ll lastpos = -1;
    if (s[0] == '1') 
    {
        ans++;
        lastpos = 0;
    }
    fr (i, 1, n)
    {
        if (s[i] == '1')
        {
            if (lastpos < 0) 
            {
                ans++;
                lastpos = i;
                continue;
            }
            if ((i - lastpos) > (k - 1))
            {
                ans++;
            }
            lastpos = i;
        }
    }
    cout << ans << '\n';

    // int n,k;
    // cin >> n >> k;
    // string s;
    // cin >> s;
    // int count = 0;
    // int prev = -1 * n;
    // if(s[0] == '1'){
    //     count++;
    //     prev = 0;
    // }
    // for(int i = 1;i<n;i++){
    //     if(s[i] == '0') continue;
    //     if(s[i] == '1' && (i - prev) > (k-1)){
    //         count++;
    //     }
    //     if(s[i] == '1') prev = i;
    // }
 
    // cout << count << endl;

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
