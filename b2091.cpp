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
    int n, x; cin >> n >> x;
    vi vt(n);
    fr(i, 0, n)
    {
        cin >> vt[i];
    }
    int team = 0;
    int curr_min = INT_MAX;
    int size = 0;
    sort(vt.begin(), vt.end());
    _fr(i, n - 1, -1)
    {
        size++;
        curr_min = min(vt[i], curr_min);
        if ((curr_min * size) >= x)
        {
            team++;
            size = 0;
        } 
    }
    cout << team << '\n';
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