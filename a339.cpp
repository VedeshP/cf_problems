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

void solve()
{
    // sure i will write an overly complicated solution
    string s; cin >> s;
    vector<char> vt;
    ll n = s.size();
    fr (i, 0, n)
    {
        if (isdigit(s[i]))
        {
            vt.PB(s[i]);
        }
    }
    sort(vt.begin(), vt.end());
    
    // fr (i, 0, vt.size()) cout << vt[i];
    // cout << '\n';

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            s[i] = vt[j];
            j++;
        }
    }

    cout << s << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}
