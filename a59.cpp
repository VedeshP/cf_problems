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
    string s; cin >> s;
    ll n = s.size();

    ll lower = 0, upper = 0;
    fr (i, 0, n)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    fr (i, 0, n)
    {
        if (lower >= upper)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        else
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }        
    }

    cout << s << '\n';
}

int main(void)
{
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}
