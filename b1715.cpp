#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <stack>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll reqsum = s;
    vll ans(n, 0);


    if (s < k * b || s > k * b + (n * (k - 1)))
    {
        cout << -1  << '\n';
        return;
    }
    ll x;
    ans[0] = k * b;
    s-= k * b;
    fr (i, 0, n)
    {
        x = min(s, k - 1);
        ans[i] += x;
        s -= x;
    }
    // ll x;
    // ans.PB(k * b);
    // // n--;
    // s -= k * b;
    // ll c = 0;
    // while (c < n)
    // {
    //     // if (s < 0)
    //     // {
    //     //     cout << -1 << '\n';
    //     //     return;
    //     // }
    //     if (c == 1)
    //     {
    //         x = min(s, k - 1);
    //         ans[0] += x;
    //         s -= x;
    //         c++;
    //         // continue;
    //     }
    //     else
    //     {
    //         x = min(s, k - 1);
    //         ans.PB(x);
    //         s -= x;
    //         c++;
    //     }
    // }
    // if (ans.size() == n)
    // {
        fr (i, 0, ans.size()) cout << ans[i] << ' ';
        cout << '\n';
    // }
    
    return;
    // // if (s / k < b)
    // // {
    // //     cout << -1 << '\n';
    // //     return;
    // // }
    // ll x;
    // // if (s > k * b)
    // // {
    //     ans.PB(k * b);
    //     n--;
    //     s -= k * b;
    // // }
    // while (n > 0)
    // {   
    //     if (s < 0)
    //     {
    //         cout << -1 << '\n';
    //         return;
    //     }
    //     x = min(s, k - 1);
    //     ans.PB(x);
    //     s -= x;
    //     n--;
    // }

    // if (s > 0 && n == 0)
    // {
    //     cout << -1 << '\n';
    //     return;
    // }
    // // if (accumulate(ans.begin(), ans.end(), 0LL) != reqsum)
    // // {
    // //     cout << -1 << '\n';
    // //     return;
    // // }

    // fr (i, 0, ans.size()) cout << ans[i] << ' ';
    // cout << '\n';

    // return;
}

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}
