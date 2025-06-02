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
#include <limits.h>
#include <string>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    string s; cin >> s;
    ll n = s.size();
    if (n > 10)
    {
        string ans;
        ans.PB(s[0]);
        string len = to_string(n - 2);
        fr (i, 0, len.size()) ans.PB(len[i]);
        ans.PB(s[n - 1]);

        cout << ans << '\n';
        return;
    }

    cout << s << '\n';

    return;
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
