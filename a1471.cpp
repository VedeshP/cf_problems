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
    ll n, x; cin >> n >> x;
    ll mx = 0, mn = 0;
    ll y;
    fr(i, 0, n)
    {
        cin >> y;
        mn += y;
        mx += ceil((1.0 * y) / x);
    }
    mn = ceil((1.0 * mn) / x);
    cout << mn << " " << mx << '\n';
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