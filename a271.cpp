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

bool isequal(ll n)
{
    set<int> digits;
    while (n > 0)
    {
        digits.insert(n % 10);
        n /= 10;
    }

    return digits.size() < 4;
}

void solve()
{
    ll n; cin >> n;
    ll ans = n + 1;
    while (isequal(ans))
    {
        ans++;
    }
    cout << ans << '\n';
}

int main(void)
{
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}
