#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

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


ll calculate_portions(ll k_curr, ll temp, ll drop)
{
    if (k_curr < temp) return 0;
    return (k_curr - temp) / drop + 1;
}

void solve()
{
    ll k, a, b, x, y; cin >> k >> a >> b >> x >> y;

    ll k1 = k;
    ll ans1 = 0;

    ll count_a1 = calculate_portions(k1, a, x);
    k1 -= count_a1 * x;

    ll count_b1 = calculate_portions(k1, b, y);

    ans1 = count_a1 + count_b1;

    ll k2 = k;
    ll ans2 = 0;

    ll count_b2 = calculate_portions(k2, b, y);
    k2 -= count_b2 * y;

    ll count_a2 = calculate_portions(k2, a, x);

    ans2 = count_a2 + count_b2;

    cout << max(ans1, ans2) << '\n';
    // bool first = false, second = false;
    // ll maxa = ceil(((k - a) * 1.0) / x);
    // ll maxb = ceil(((k - b) * 1.0) / y);

    // ll ans = 0;
    // if (a > k && b > k)
    // {
    //     cout << ans << '\n';
    //     return;
    // }
    // if (maxa >= maxb)    
    // {
    //     k -= maxa * x;
    //     if (k >= a)
    //     {
    //         k -= x;
    //         maxa++;
    //     }
    //     // cout << maxa << ' ';
    //     if (k >= b)
    //     {
    //         ans = ceil(((k - b) * 1.0 ) / y);
    //         k -= ans * y;
    //         if (k >= b)
    //         {
    //             ans += 1;
    //         }
    //     }
        
    //     ans += maxa;
    // }
    // else
    // {
    //     k -= maxb * y;

    //     if (k >= b)
    //     {
    //         k -= y;
    //         maxb++;
    //     }
    //     if (k >= a)
    //     {
    //         ans = ceil(((k - a) * 1.0) / x);
    //         k -= ans * x;
    //         if (k >= a)
    //         {
    //             ans += 1;
    //         }
    //     }
    //     ans += maxb;
    // }

    // cout << ans << '\n';
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
