#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (int i = a; i < b; i++)
#define _fr(i, a, b) for (int i = a; i > b; i--)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>

using namespace std;

void solve()
{
    string s, t; cin >> s >> t;
    int n = s.size(); int m = t.size();
    map<char, int> tmap;
    fr(i, 0, m) tmap[t[i]]++;
    _fr(j, n - 1, -1)
    {
        if (tmap[s[j]] > 0)
        {
            tmap[s[j]]--;
            continue;
        }
        else 
        {
            s[j] = '.';
        }
    }
    string ans;
    fr(i, 0, n)
    {
        if (s[i] != '.') ans.PB(s[i]);
    }
    // cout << s << '\n';
    // cout << ans << '\n';
    if (ans == t) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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