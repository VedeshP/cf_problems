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
#include <set>

using namespace std;

void solve()
{
    int x;
    fr (i, 0, 5)
    {
        fr (j, 0, 5)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 2) + abs(j - 2) << '\n';
                return;
            }
        }
    }
}

int main(void)
{
    int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}