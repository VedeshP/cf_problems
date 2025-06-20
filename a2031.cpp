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
    ll n; cin >> n;
    vll vt(n);
    fr (i, 0, n) cin >> vt[i];

    int ans = 0;
    map<int, int> mp;
    fr (i, 0, n)
    {
        mp[vt[i]]++;
    }

    for (auto ele : mp)
    {
        ans = max(ans, ele.S);
    }

    cout << n - ans << '\n';
    // fr (i, 0, n - 1)
    // {
    //     if (vt[i] > vt[i + 1])
    //     {
    //         // vt[i] = vt[i + 1];
    //         ans++;
    //     }
    // }

    // cout << ans << '\n';
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
