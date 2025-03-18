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

using namespace std;

void solve()
{
    int n; cin >> n;
    vi vt(n);
    fr(i, 0, n)
    {
        cin >> vt[i];
    }
    int count = 0;
    _fr(i, n - 2, -1)
    {
        if (vt[i + 1] <= vt[i])
        {
            while (vt[i + 1] <= vt[i] && vt[i] > 0)
            {
                vt[i] /= 2;
                count++;
            }
            if (vt[i] == vt[i + 1]) 
            {
                cout << -1 << '\n';
                return;
            }
        }
    }
    cout << count << '\n';
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