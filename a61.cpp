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
    string a, b;
    cin >> a;
    cin >> b;
    // cout << a << " " << b << '\n';
    int n = a.length();
    string ans;
    fr (i, 0, n)
    {
        if (a[i] != b[i]) ans.push_back('1');
        else ans.push_back('0');
    }
    cout << ans << '\n';
}

int main(void)
{
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}