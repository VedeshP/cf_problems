#define ll long long
#define pii pair<int,int>
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
#include <algorithm>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    int n; cin >> n;
    vll vt(n);
    fr (i, 0, n) cin >> vt[i];
    vll ans;
    ans.PB(vt[0]);
    fr (i, 1, n) 
    {
        if (vt[i - 1] <= vt[i])
        {
            ans.PB(vt[i]);
        }
        else 
        {
            ans.PB(vt[i]); ans.PB(vt[i]);
        }
    }

    cout << ans.size() << '\n';
    fr (i, 0, ans.size())
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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