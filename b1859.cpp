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
    int n; cin >> n;
    vector<vector<ll>> vt(n);
    vll fmin(n, 0);
    vll smin(n, 0);
    fr (i, 0, n)
    {
        int m; cin >> m;
        vt[i].resize(m);
        fr (j, 0, m)
        {
            cin >> vt[i][j];
        }
        sort(vt[i].begin(), vt[i].end());
        fmin[i] = vt[i][0];
        smin[i] = vt[i][1];
    }
    if (n == 1)
    {
        cout << *min_element(vt[0].begin(), vt[0].end()) << '\n';
        return;
    }
    sort(fmin.begin(), fmin.end());
    sort(smin.begin(), smin.end());
    ll ans = 0;
    ans += fmin[0];
    fr (i, 1, n)
    {
        ans += smin[i];
    }
    // fr (i, 1, n) cout << fmin[i] << ' ';
    // cout << '\n';
    // fr (i, 1, n) cout << smin[i] << ' ';
    // cout << '\n';
    cout << ans << '\n';
    
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