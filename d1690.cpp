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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    vll vt(n + 1, 0);

    // ll curr = 0;
    fr (i, 1, n + 1)
    {
        vt[i] = vt[i - 1] + ((s[i - 1] == 'W') ? 1 : 0);
        // vt[i] = vt[i - 1] + int(s[i - 1] == 'W');
    }
    ll ans = INT_MAX;
    fr (i, k, n + 1)
    {
        ans = min(ans, vt[i] - vt[i - k]);
    }

    cout << ans << '\n';
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
