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
    vi vt(n);
    fr(i, 0, n) cin >> vt[i];
    
    fr(i, 1, n - 1)
    {
        if (vt[i] > vt[i - 1] && vt[i] > vt[i + 1])
        {
            cout << "YES" << '\n';
            cout << i << " " << i + 1 << " " << i + 2 << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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