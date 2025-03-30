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
    int n, k; cin >> n >> k;
    vi vt(n * k);
    // fr(i, 0, n * k) cout << i << " " ;
    fr(i, 0, (n * k))
    {
        cin >> vt[i];
    }
    int mxsum = 0;
    int i = n * k;
    while(k--)
    {
        // i -= ceil((1.0 * n) / 2);
        i -= (n / 2) + 1;
        mxsum += vt[i];
    }
    cout << mxsum << '\n';
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