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

int min_op(string s, string pos_val)
{
    int ops = 0;
    int check_ind = pos_val.size() - 1;
    _fr(i, s.size() - 1, -1)
    {
        if (s[i] == pos_val[check_ind])
        {
            check_ind--;
            if (check_ind < 0) break;
        }
        else ops++;
    }
    if (check_ind >= 0) ops = INT_MAX;
    return ops;
}

void solve()
{
    string s; cin >> s;
    vector<string> div = {"00", "50", "25", "75"};
    int ans = INT_MAX;
    for (auto pos_val : div)
    {
        ans = min(ans, min_op(s, pos_val));
    }
    cout << ans << '\n';
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