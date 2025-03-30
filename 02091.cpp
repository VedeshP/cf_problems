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
    // if (n < 8)
    // {
    //     cout << 0 << '\n';
    //     return;
    // }
    vi vt(n);
    map<int, int> mp;
    fr(i, 0, n)
    {
        cin >> vt[i];
    }
    int i = 0;
    int flag = 0;
    int ans = 0;
    while (i < n)
    {
        mp[vt[i]]++;
        ans++;
        if ((mp[0] >= 3 && mp[1] >= 1 && mp[3] >= 1 && mp[2] >= 2 && mp[5] >= 1))
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag) cout << ans << '\n';
    else cout << 0 << '\n';
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