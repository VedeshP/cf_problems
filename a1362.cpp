#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define sz(x) (ll)(x).size()
#define srt(a) sort((a).begin(),(a).end())
ll MOD=1000000007;

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
    ll a, b; cin >> a >> b;
    if (a == b)
    {
        cout << 0 << '\n';
        return;
    }
    if ((max(a, b) / min (a, b)) % 2 != 0)
    {
        cout << -1 << '\n';
        return;
    }
    // cout << 69 << '\n';

    // doing brute force first
    ll op = 0;
    if (a < b)
    {
        while (a != b)
        {
            if (a * 8 <= b)
            {
                a*=8; op++; continue;
            }
            if (a * 4 <= b)
            {
                a*=4; op++; continue;
            }
            if (a * 2 <= b)
            {
                a*=2; op++; continue;
            }
            else 
            {
                cout << -1 << '\n';
                return;
            }
        }
    }
    else 
    {
        while (a != b)
        {
            if (b * 8 <= a)
            {
                b*=8; op++; continue;
            }
            if (b * 4 <= a)
            {
                b*=4; op++; continue;
            }
            if (b * 2 <= a)
            {
                b*=2; op++; continue;
            }
            else 
            {
                cout << -1 << '\n';
                return;
            }
        }
    }
    cout << op << '\n';
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
