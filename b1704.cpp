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
#include <stack>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    ll n, x; cin >> n >> x;
    vll vt(n, 0);
    vector<pll> inter(n, MP(0, 0));

    fr (i, 0, n)
    {
        cin >> vt[i];
        inter[i].F = vt[i] - x;
        inter[i].S = vt[i] + x;
    }

    ll change = 0;

    ll l = inter[0].F;
    ll r = inter[0].S;
    fr (i, 1, n)
    {
        l = max(l, inter[i].F);
        r = min(r, inter[i].S);

        if (l > r)
        {
            change++;
            l = inter[i].F;
            r = inter[i].S;
        }
    }

    cout << change << '\n';
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
