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
#include <set>

using namespace std;

void solve()
{
    ll a, b; cin >> a >> b;
    if (a - b == 0)
    {
        cout << 0 << " " << 0 << '\n';
    }
    else
    {
        ll x = abs(a - b);
        ll m = min(a % x, x - a % x);
        cout << x << " " << m << '\n';
    }
    // else if (abs(a - b) == 1)
    // {
    //     cout << 1 << " " << 0 << '\n';
    // }
    // else 
    // {
    //     cout << abs(a - b) << " " << min(a % abs(a - b), b % abs(a - b)) << '\n';
    // }
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