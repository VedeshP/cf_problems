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
    // ll n; cin >> n;
    // cout << 2 * n << '\n'; this is from a different contest problem

    ll n; cin >> n;
    int ans = 0;
    if (n == 1)
    {
        cout << 0 << '\n';
        return;
    }
    while (n > 1)
    {
        if (n % 3 != 0)
        {
            cout << -1 << '\n';
            return;
        }
        else if (n % 2 == 0 && n % 3 == 0)
        {
            ans++;
            n /= 6;
        }
        else if (n % 3 == 0 && n % 2 != 0)
        {
            ans += 2;
            n /= 3;
        }
        
    }
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