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
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    ll n; 
    char c;
    cin >> n >> c;
    string s; cin >> s;

    if (c == 'g')
    {
        cout << 0 << '\n';
        return;
    }

    s += s;
    n = s.size();
    ll gidx = -1;
    ll ans = -1;
    _fr (i, n - 1, 0)
    {
        if (s[i] == 'g')
        {
            gidx = i;
        }

        if (s[i] == c)
        {
            ans = max(ans, gidx - i);
        }

    }

    cout << ans << '\n';
    // vll c_occ;
    // fr (i, 0, n)
    // {
    //     if (s[i] == c)
    //     {
    //         c_occ.PB(i);
    //     }
    // }
    
    // // fr(i, 0, c_occ.size()) cout << c_occ[i] << ' ';
    // // cout << '\n';

    // s += s;

    // ll max_occ = -1;
    // fr (i, 0, c_occ.size())
    // {
    //     ll j = c_occ[i];
    //     while (s[j] != 'g')
    //     {
    //         j++;
    //         if (s[j] == 'g')
    //         {
    //             max_occ = max(max_occ, j - c_occ[i]);
    //         }
    //     }
    // }

    // cout << max_occ << '\n';
    // ll max_occ = -1;
    // fr (i, 0, n)
    // {
    //     ll j = c_occ[i];
    //     ll occ = 0;
    //     while (s[j] != 'g')
    //     {
    //         occ++;
    //         if (s[j] == c)
    //         {  
    //             max_occ = max(max_occ, occ);
    //         }
    //         j = (j + 1) % n;
    //     }
    // }

    // cout << max_occ << '\n';
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
