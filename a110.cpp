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

void solve()
{
    ll n; cin >> n;
    ll luckycount = 0;

    while (n > 0)
    {
        ll x = n % 10;
        if (x == 4 || x == 7)
        {
            luckycount++;
        }
        n /= 10;
    }
    if ((luckycount / 10) == 0)
    {
        if (luckycount == 4 || luckycount == 7)
        {
            cout << "YES" << '\n';
            return;
        }
        else
        {
            cout << "NO" << '\n';
            return;
        }
    }
    ll lc = 0;
    while (luckycount > 0)
    {
        ll x = luckycount % 10;
        if (x == 4 || x == 7)
        {
            lc++;
        }     
        luckycount /= 10;
    }

    if (lc == 4 || lc == 7)
    {
        cout << "YES" << '\n';
        return;
    }
    else
    {
        cout << "NO" << '\n';
        return;
    }
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
