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
#include <string>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int gcd(int a,int b)
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

void solve()
{
    ll x, y; cin >> x >> y;
    // ll x1, y1;
    if (x == 0 && y == 0)
    {
        cout << 1 << '\n';
        cout << x << ' ' << y << '\n';
        return;
    }
    if (x == 1 && y == 1)
    {
        cout << 1 << '\n';
        cout << x << ' ' << y << '\n';
        return;
    }
    if (gcd(x, y) != 1)
    {
        cout << 2 << '\n';
        cout << x - 1 << ' ' << 1 << '\n';
        cout << x << ' ' << y << '\n';
    }
    
    else 
    {
        cout << 1 << '\n';
        cout << x << ' ' << y << '\n';  
    }
    // if (y % x == 0)
    // {
    //     cout << 2 << '\n';
    //     cout << 0 << ' ' << 1 << '\n';
    //     cout << x << ' ' << y << '\n';
    // }
    // else if (x % y == 0)
    // {
    //     cout << 2 << '\n';
    //     cout << 1 << ' ' << 0 << '\n';
    //     cout << x << ' ' << y << '\n';
    // }
    // else 
    // {
    //     cout << 1 << '\n';
    //     cout << x << ' ' << y << '\n';
    // }

    return;
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
