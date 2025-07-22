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
#include <cctype>
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

ll max_pow_2_ln(ll n)
{
    if (n <= 1)
    {
        return 0;
    }
    ll ans = 1;
    while (ans * 2 < n)
    {
        ans *= 2;
    }
    return ans;
}

void solve()
{
    ll n; cin >> n;
    ll maxpow2 = max_pow_2_ln(n);
    vll vt(n);
    fr (i, 0, n) vt[i] = i;
    fr (i, 0, n)
    {
        if (vt[i] == maxpow2)
        {
            reverse(vt.begin(), vt.begin() + i);
            break;
        }
    }
    fr (i, 0, n) cout << vt[i] << ' ';
    cout << '\n';
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
