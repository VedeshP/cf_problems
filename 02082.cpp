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
    int n, m; cin >> n >> m;
    // vector<vi> vt(n, vi(m));
    vector<vector<char>> vt(n, vector<char>(m));
    fr(i, 0, n)
    {
        fr(j, 0, m)
        {
            cin >> vt[i][j];
            // cout << vt[i][j] << ' ';
        }
        // cout << '\n';
    }
    vi row(n, 0);
    vi col(m, 0);
    fr(i, 0, n)
    {
        fr(j, 0, m)
        {
            if (vt[i][j] == '1')
            {
                row[i]++;
            }
        }
    }

    fr(i, 0, m)
    {
        fr(j, 0, n)
        {
            if (vt[j][i] == '1')
            {
                col[i]++;
            }
        }
    }
    int rowcount = 0, colcount = 0;
    fr(i, 0, n)
    {
        if (row[i] % 2 != 0) rowcount++;
    }
    fr(i, 0, m)
    {
        if (col[i] % 2 != 0) colcount++;
    }

    cout << max(rowcount, colcount) << '\n';
    // fr(i, 0, n) cout << row[i] << ' ';
    // cout << "--" << '\n';
    // fr(i, 0, m) cout << col[i] << ' ';
    // cout << '\n';
    
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