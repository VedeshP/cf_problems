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
    ll w, h; cin >> w >> h;
    ll k; cin >> k;
    vll x1(k); fr (i, 0, k) cin >> x1[i];
    cin >> k; vll x2(k); fr (i, 0, k) cin >> x2[i];
    cin >> k; vll y1(k); fr (i, 0, k) cin >> y1[i];
    cin >> k; vll y2(k); fr (i, 0, k) cin >> y2[i];

    ll mnx1 = INT_MAX, mxx1 = INT_MIN;
    fr (i, 0, x1.size())
    {
        mnx1 = min(mnx1, x1[i]);
        mxx1 = max(mxx1, x1[i]);
    }
    ll ax1 = (mxx1 - mnx1) * h;
    ll mnx2 = INT_MAX, mxx2 = INT_MIN;
    fr (i, 0, x2.size())
    {
        mnx2 = min(mnx2, x2[i]);
        mxx2 = max(mxx2, x2[i]);
    }
    ll ax2 = (mxx2 - mnx2) * h;
    ll mny1 = INT_MAX, mxy1 = INT_MIN;
    fr (i, 0, y1.size())
    {
        mny1 = min(mny1, y1[i]);
        mxy1 = max(mxy1, y1[i]);
    }
    ll ay1 = (mxy1 - mny1) * w;
    ll mny2 = INT_MAX, mxy2 = INT_MIN;
    fr (i, 0, y2.size())
    {
        mny2 = min(mny2, y2[i]);
        mxy2 = max(mxy2, y2[i]);
    }
    ll ay2 = (mxy2 - mny2) * w;

    cout << max(max(ax1, ax2), max(ay1, ay2)) << '\n';
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
