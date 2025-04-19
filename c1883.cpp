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
    // good thing is that we have k = 2 3 5 only
    int n, k; cin >> n >> k;
    // cout << "n: " << n << " k: " << k << '\n';
    vi vt(n, 1);
    vi checkvt(n, 0);
    int evencnt = 0;
    fr (i, 0, n)
    {
        cin >> vt[i];
        if (vt[i] % k == 0)
        {
            checkvt[i] = 0;
            // cout << 0 << '\n';
            // cout << vt[i] << "k-->" << k << '\n';
            // cout << "why" << '\n';
            // return; 
            // big big mistake here mate - can't do that this return statement is messing up with the input taking of next test case
        }
        else checkvt[i] = ((k * ((vt[i] / k) + 1)) - vt[i]);
        if (vt[i] % 2 == 0) evencnt++;
    }
    if (k == 4)
    {
        if (evencnt >= 2)
        {
            cout << 0 << '\n';
            return;
        }
        if (evencnt == 1) checkvt.PB(1);
        else checkvt.PB(2);
    }
    // fr (i, 0, checkvt.size())
    // {
    //     cout << checkvt[i] << " ";
    // }
    // cout << '\n';
    cout << *min_element(checkvt.begin(), checkvt.end()) << '\n';
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