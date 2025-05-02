#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (int i = a; i < b; i++)
#define _fr(i, a, b) for (int i = a; i > b; i--)

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
    // this one feels something like scheduling algorithm

    // note on this is that if we get an ai > k but ai % k == 0 we make ai = 0 but instead we should make it k
    int n, k; cin >> n >> k;
    vll vt(n);
    vector<pll> ans(n);
    fr (i, 0, n)
    {
        cin >> vt[i];
        // if (vt[i] > k)
        // {
        //     vt[i] = (vt[i] % k);
        // }
        ans[i].F = vt[i];
        ans[i].S = i + 1;
    } 
    
    fr (i, 0, n)
    {
        ans[i].F = (ans[i].F % k);
        if (ans[i].F == 0) ans[i].F = k;
    }
    sort(ans.begin(), ans.end(), [](const pll &a, const pll &b)
    {
        if (a.F == b.F)
        {
            return a.S < b.S;
        }
        return a.F > b.F;
    });
    for (const auto &it : ans)
    {
        cout << it.S << ' ';
    }
    cout << '\n';


    // below solution is tle solution
    // unordered_set<int> ans;
    // while (ans.size() < n)
    // {
    //     auto maxiter = max_element(vt.begin(), vt.end());
    //     int maxidx = distance(vt.begin(), maxiter);
    //     // cout << maxidx << ' ';
    //     if (vt[maxidx] <= k)
    //     {
    //         // ans.insert(maxidx);
    //         vt[maxidx] = 0;
    //         cout << maxidx + 1 << ' ';
    //     }
    //     else
    //     {
    //         vt[maxidx] -= k;
    //     }
    // }

    // // for (const auto &it : ans)
    // // {
    // //     cout << it << ' ';
    // // }
    // cout << '\n';
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