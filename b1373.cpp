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
    string s; cin >> s;
    int n = s.size();
    int one = 0, zero = 0;
    fr(i, 0, n)
    {
        if (s[i] == '1') one++;
        else zero++;
    }
    int plays = 0;
    while (one && zero && n)
    {
        if (one && zero)
        {
            one--; zero--;
            n -= 2;
            plays++;
        }
    }
    if (plays % 2 != 0) cout << "DA" << '\n';
    else cout << "NET" << '\n';
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