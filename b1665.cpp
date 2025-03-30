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
    int n; cin >> n;
    vector<ll> vt(n);
    map<int, int> mp;
    fr(i, 0, n)
    {
        cin >> vt[i];
        mp[vt[i]]++;
    }
    int maxi = 0;
    for (const auto&ele : mp)
    {
        if (ele.S > maxi) maxi = ele.S;
    }
    int change = n - maxi;
    int count = 0;
    while (change > 0)
    {
        count += min(maxi, change);
        change -= min(maxi, change);
        count++;
        maxi *= 2;
    }
    cout << count << '\n';
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