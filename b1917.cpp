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
    ll n; cin>> n;
    string s; cin>>s;
    set<string> st;
    fr (i, 0, n)
    {
        string x = s.substr(i, n - i);
        st.insert(x);
        // fr (i, 0, sz(x))
        // cout << x << ' ';
    }
    // fr (i, 0, n)
    // {
    //     string x = s.substr(i, n - i);
    //     st.insert(x);
    //     // cout << x << ' ';
    //     if (i + 1 < n)
    //     {
    //         string y = s.substr(i, 1) + s.substr(i + 2, n - i - 2);
    //         st.insert(y);
    //         // cout << y << ' ';
    //     }
        
    // }
    // cout << sz(st) << '\n';
    // fr (i, 0, n)
    // {
    //     string x = s.substr(i, n - i);
    //     // cout << x << ' ';
    //     if (st.find(x) == st.end())
    //     {
    //         st.insert(x); 
    //         // continue;
    //     }
    //     // else 
    //     // {
    //         if (i + 2 < n)
    //         {
    //             string y = s.substr(i, 1) + s.substr(i + 2, n-i-2);
    //             if (st.find(y) == st.end())
    //             {
    //                 st.insert(y); continue;
    //             }
    //         }
            
    //     // }
    // }

    // cout << sz(st) << '\n';
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
