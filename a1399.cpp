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

    sort(vt.begin(), vt.end());

    fr (i, 0, n - 1)
    {
        if (abs(vt[i] - vt[i + 1]) > 1)
        {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
    // multiset<int> st;
    // fr (i, 0, n)
    // {
    //     ll x; 
    //     cin >> x;
    //     st.insert(x);
    // }

    // for (auto ele : st)
    // {
    //     st.erase(ele);
    //     if (st.find(ele) == st.end() && st.find(ele + 1) == st.end() && st.find(ele - 1) == st.end())
    //     {
    //         cout << "NO" << '\n';
    //         return;
    //     }
    // }
    // cout << "YES" << '\n';
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
