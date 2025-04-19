#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (int i = a; i < b; i++)
#define _fr(i, a, b) for (int i = a; i > b; i--)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    int n, p; cin >> n >> p;
    vll maxres(n);
    vll cost(n);
    fr (i, 0, n) cin >> maxres[i];
    fr (i, 0, n) cin >> cost[i];
    vector<pair<ll, ll>> vt(n);
    fr (i, 0, n)
    {
        vt[i].F = cost[i];
        vt[i].S = maxres[i];
    }
    // sort(vt.begin(), vt.end(), [](pair<ll, ll> a, pair<ll, ll> b){
    //     return a.S < b.S;
    // });
    sort(vt.begin(), vt.end());
    // the above is using a lambda function acting as a comparator

    // fr (i, 0, vt.size())
    // {
    //     cout << vt[i].F << " " << vt[i].S << "  ";
    // }

    ll min_cost = p;
    ll shared = 1;

    for (auto i : vt)
    {
        ll can_share = i.S;
        ll cost = i.F;

        if (cost >= p)
        {
            break;
        }

        if (shared + can_share > n)
        {
            min_cost += (n - shared) * cost;
            shared = n;
            break;
        }
        else
        {
            min_cost += can_share * cost;
            shared += can_share;
        }
    }
    // cout << n - shared << " ";
    min_cost += (n - shared) * p;
    cout << min_cost << '\n';
    // vll chooseidx;
    // int i = 0;
    // while(n)
    // {
    //     if (n > maxres[vt[i].F])
    //     {
    //         n -= maxres[vt[i].F];
    //         chooseidx.PB(vt[i].F);
    //     }
    //     else
    //     {
    //         chooseidx.PB(vt[i].F);
    //         n = 0;
    //     }
    // }
    
    // ll ans = 0;
    // fr (i, 0, chooseidx.size())
    // {
    //     ans += cost[chooseidx[i]] * maxres[chooseidx[i]];
    // }
    // ans += (p * chooseidx.size());
    // cout << ans << '\n';
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