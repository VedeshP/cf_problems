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
    int n, m; cin >> n >> m;
    vi vt(n);
    fr (i, 0, n) cin >> vt[i];
    int i = 0;
    while (accumulate(vt.begin(), vt.end(), 0) != 0)
    {
        if (vt[i] > 0)
        {
            if (vt[i] > m) vt[i] -= m;
            else vt[i] = 0;
        }
        if (i == n - 1 && accumulate(vt.begin(), vt.end(), 0) == 0)
        {
            cout << i + 1 << '\n';
            return;
        }
        i = (i + 1) % n;
    }

    cout << i << '\n';
    // int maxdiff = INT_MIN;
    // int maxidx = -1;
    // _fr(i, n - 1, -1)
    // {
    //     if (vt[i] > m)     
    //     {
    //         maxidx = i;
    //         break;
    //     }
    //     if (vt[i] - m > maxdiff)
    //     {
    //         maxdiff = vt[i] - m;
    //         maxidx = i;
    //     }
    // }

    // cout << maxidx + 1 << '\n';
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