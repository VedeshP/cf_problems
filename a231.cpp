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

int solve()
{
    int a, b, c; cin >> a >> b >> c;
    int sure = 0;
    if (a == 1) sure++;
    if (b == 1) sure++;
    if (c == 1) sure++;
    if (sure >= 2)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int t;
    cin >> t;
    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        int count = solve();
        ans += count;
    }
    cout << ans << '\n';
}