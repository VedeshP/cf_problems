#define ll long long
#define pii pair<int,int>
#define vi vector<int>

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

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<ll> vt(n);
    ll one = 0, zero = 0;
    fr(i, 0, n)
    {
        cin >> vt[i];
        if (vt[i] == 0) zero++;
        if (vt[i] == 1) one++;
    }
    ll ans = 0;
    ans = pow(2, zero);
    ans *= one;
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