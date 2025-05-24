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
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    ll n; cin >> n;
    vll vt(n);

    fr (i, 0, n)
    {
        ll x;
        cin >> x;
        vt[i] = x;
    }

    sort(vt.begin(), vt.end());

    fr (i, 0, n)
    {
        vt[i] = vt[i] % 2;
    }

    ll ans = -1;
    ll start = 0;
    ll end = n - 1;
    ll left = 0;
    ll right = 0;
    _fr (i, n - 1, -1)
    {
        if (vt[i] == vt[0])
        {
            break;
        }
        right++;
    }

    fr (i, 0, n)
    {
        if (vt[i] == vt[n - 1])
        {
            break;
        }
        left++;
    }

    cout << min(left, right) << '\n';
    
    // fr (i, 0, n) cout << vt[i] << ' ';
    // cout << '\n';
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
