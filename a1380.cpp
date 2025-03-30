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
    
    int leftidx, rightidx;
    fr(i, 1, n)
    {
        int left = 0, right = 0;
        _fr(j, i - 1, -1)
        {
            if (vt[j] < vt[i])
            {
                left = 1;
                leftidx = j;
                break;
            }
        }
        fr(j, i + 1, n)
        {
            if (vt[j] > vt[i])
            {
                right = 1;
                rightidx = j;
                break;
            }
        }
        if (left && right)
        {
            cout << "YES" << '\n';
            cout << leftidx + 1 << " " << i + 1 << " " << rightidx + 1 << '\n';
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