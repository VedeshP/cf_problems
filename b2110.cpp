#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <stack>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    // ll n; cin >> n;
    string s; 
    cin >> s;
    ll n = s.size();
    // stack<char> st;
    // fr (i, 0, n) cout << s[i];
    // cout << '\n';
    // if (s.size() == 0)
    // {
    //     cout << "NO" << '\n';
    //     return;
    // }
    ll start = n / 2, end = n / 2 + 1;
    cout << end << '\n';
    // ll left = 0, right = 0;
    while (end < n && start >= 0)
    {
        if (s[start] == ')' || s[end] == '(')
        {
            cout << "YES" << '\n';
            return;
        }
        start--; end++;
    }
    cout << "NO" << '\n';
    // fr (i, 1, n)
    // {
    //     if (s[i - 1] == ')' && s[i] == '(')
    //     {
    //         cout << "YES" << '\n';
    //         return;
    //     }
    // }
    // cout << "NO" << '\n';
    // fr (i, 0, n)
    // {
    //     if (s[i] == '(' && (i > n / 2))
    //     {
    //         cout << "YES" << '\n';
    //         return;
    //     }
    // }
    // cout << "NO" << '\n';
    // fr (i, 0, n)
    // {
    //     if (s[i] == '(' && i < n / 2)
    //     {

    //     }
    // }
}

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}
