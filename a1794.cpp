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
    ll n; cin >> n;
    ll ixes = 2*n-2;

    vector<string> s(ixes);
    vector<string> sgen;
    fr (i, 0, ixes)
    {
        cin >> s[i];
        if (sz(s[i]) == n - 1)
        {
            sgen.PB(s[i]);
        }
    }

    reverse(sgen[0].begin(), sgen[0].end());
    if (sgen[0] == sgen[1])
    out_YES
    else 
    out_NO

    // multiset<string> s;
    // set<string> s;
    // fr (i, 0, ixes)
    // {
    //     string x; cin >> x;
    //     s.insert(x);
    // }
    // for (auto it : s)
    // {
    //     string rev = it;
    //     reverse(rev.begin(), rev.end());
    //     if (s.find(rev) != s.end()) continue;
    //     else 
    //     {
    //         out_NO
    //         return;
    //     }
    // }
    // out_YES

    // vector<string> s(ixes); fr (i, 0, ixes) cin >> s[i];
    // map<string, ll> mp;
    // fr (i, 0, ixes) {mp[s[i]]++;}

    // for (auto it : mp)
    // {
    //     // cout << it.F << ' ' << it.S << ' ';
    //     if (it.S == 2)
    //     {
    //         out_YES
    //         return;
    //     }
    // }
    // out_NO
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
