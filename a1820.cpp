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

void solve()
{
    string s; cin >> s;
    ll n = s.size();

    ll ans = 0;
    if (s[0] == '_')
    {
        ans++;
    }
    if (s[n - 1] == '_')
    {
        ans++;
    }
    if (n == 1)
    {
        if (s[0] == '^') cout << 1 << '\n';
        else cout << 2 << '\n';
        return;
    }
    fr (i, 0, n - 1)
    {
        if (s[i] == '_' && s[i + 1] == '_')
        {
            ans++;
        }
    }

    cout << ans << '\n';
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
