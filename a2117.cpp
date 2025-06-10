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

int lcm(int a,int b)
{
    return a * b / gcd(a, b);
}

void solve()
{
    int n, x; cin >> n >> x;
    vi vt(n);
    fr (i, 0, n) cin >> vt[i];

    int btn = 0;
    fr (i, 0, n)
    {
        if (btn == 1) x--;
        if (vt[i] == 1)
        {
            btn = 1;
        }
        if (x <= 0 && vt[i] == 1)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    // if (x < 0)
    // {
    //     cout << "NO" << '\n';
    //     return;
    // }

    cout << "YES" << '\n';
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
