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
    ll n, k, q; cin >> n >> k >> q;
    vll vt(n);
    fr (i, 0, n) cin >> vt[i];
    vll consec;
    ll consec_count = 0;
    fr (i, 0, n)
    {
        if (vt[i] <= q)
        {
            consec_count++;
        }
        else
        {
            consec.PB(consec_count);
            consec_count = 0;
        }
    }
    consec.PB(consec_count);

    // fr (i, 0, consec.size())
    // {
    //     cout << consec[i] << ' ';
    // }
    // cout << '\n';

    ll ways = 0;
    fr (i, 0, consec.size())
    {
        ll curr = consec[i];
        if (curr >= k)
        {
            curr = curr - k + 1;
            ways += (curr * (curr + 1)) / 2;
        }
        else
        {
            continue;
        }
    }

    cout << ways << '\n';

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
