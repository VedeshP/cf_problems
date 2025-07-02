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
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    vll checkidx;
    fr (i, 0, n - 1)
    {
        if (s[i] == s[i + 1]) checkidx.PB(i);
    }
    if (checkidx.size() > 0)
    {
        fr (i, 0, m - 1)
    {
        if (t[i] == t[i + 1]) 
        {
            out_NO
            return;
        }
    }
    fr (i, 0, checkidx.size())
    {
        ll idx = checkidx[i];
        if (s[idx] == t[0] || s[idx + 1] == t[m - 1])
        {
            out_NO
            return;
        }
    }
    }
    
    out_YES
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
