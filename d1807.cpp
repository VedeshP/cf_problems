#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (int i = a; i < b; i++)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <limits.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    vi vt(n);
    fr(i, 0, n)
    {
        cin >> vt[i];
        if (vt[i] == 1) vt[i]++;
    }
    // if (vt[0] == 1) vt[0]++;
    fr(i, 0, n - 1)
    {
        if (vt[i + 1] % vt[i] == 0) vt[i + 1]++;
    }
    fr(i, 0, n) cout << vt[i] << ' ';
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