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

    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << '\n';
        return;
    }
    ll a = 1, b;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a = n / i;
            break;
        }
    }
    b = n - a;
    cout << a << " " << b << '\n';
    // this will most prob give tle
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
