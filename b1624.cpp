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
    ll a, b, c; cin >> a >> b >> c;
    if (((a + c)) % (2 * b) == 0 || (((2 * b) - a) % c == 0 && ((2 * b) - a) > 0) || (((2 * b) - c) % a == 0 && ((2 * b) - c) > 0))
    {
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';
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