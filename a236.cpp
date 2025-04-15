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
#include <set>

using namespace std;

void solve()
{
    string s; cin >> s;
    int n = s.length();
    map<char, int> mp;
    fr(i, 0, n)
    {
        mp[s[i]]++;
    }
    int ans = mp.size();
    if (ans % 2 == 0)
    {
        cout << "CHAT WITH HER!" << '\n';
    }
    else 
    {
        cout << "IGNORE HIM!" << '\n';
    }
}

int main(void)
{
    int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}