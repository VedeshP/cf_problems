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

void solve()
{
    ll n, r; cin >> n >> r;
    vll vt(n);
    fr (i, 0, n)
    {
        cin >> vt[i];
    }
    ll row = 0;
    ll total = accumulate(vt.begin(), vt.end(), 0);
    fr (i, 0, n)
    {
        row += (vt[i] / 2);
        if (vt[i] % 2 == 0)
        {
            vt[i] = 0;
        }
        else vt[i] = 1;
    }
    ll leftalone = accumulate(vt.begin(), vt.end(), 0);
    ll happy = total - leftalone;
    ll leftrow = r - row;
    // if (leftalone > leftrow) happy += leftrow - 1;
    // else happy += leftalone;

    // happy += max(0ll, 2 * leftrow - leftalone);

    // surprised to see that variable in editorial is exactly same
    if (leftalone > leftrow) happy += 2 * leftrow - leftalone;
    else happy += leftalone;

    cout << happy << '\n';
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
