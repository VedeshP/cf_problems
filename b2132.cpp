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
ll MOD=1000000007;

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

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

    vll ans;
    ll curr = 10;
    fr (i, 0, 18)
    {
        if (n % (curr + 1) == 0) ans.PB(n / (curr + 1));
        curr *= 10;
    }
    srt(ans);

    cout << sz(ans) << '\n';
    fr (i, 0 ,sz(ans)) cout << ans[i] << ' ';
    cout << '\n';

    return;

    // ll curr = 10;
    // ll curr = 10;
    // vll ans;
    // while (true) 
    // {
    //     ll temp = curr + 1;
    //     if (temp > n) break;
    //     if (n % temp == 0) ans.PB(n/temp);
    //     curr*=10;
    // }
    // srt(ans);
    // fr (i, 0, n) cout << ans[i] << ' ';
    // if (sz(ans)) cout << '\n';

    // above is very clever solution
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
