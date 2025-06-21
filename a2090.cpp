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

#define out_NO cout << "NO" << '\n';
#define out_YES cout << "YES" << '\n';

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <algorithm>
#include <functional>
#include <queue> // also has priority queue
#include <deque>
#include <iomanip> // required for setprecision
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

int lcm(int a,int b)
{
    return a * b / gcd(a, b);
}

void solve()
{
    ll x, y, a; cin >> x >> y >> a;

    if (x > a) out_NO
    else if ((x + y) > a) out_YES
    else 
    {
        ll left = (a / (x + y)) * (x + y);
        a -= left;
        // cout << left;
        // cout << a;
        // cout << (x + y);
        if (x > a) out_NO
        else if ((x + y) > a) out_YES
    }
    return;
    // // for sure this will give tle
    // ll sum = 0;
    // ll i = 0;
    // while (sum <= a)
    // {
    //     if (i == 0)
    //     {
    //         sum += x;
    //         i = 1;
    //     }
    //     else 
    //     {
    //         sum += y;
    //         i = 0;
    //     }
    // }
    // if (i == 1) cout << "NO" << '\n';
    // else cout << "YES" << '\n';
    // return;
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
