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
    int n, t; cin >> n >> t;
    string s; cin >> s;


    fr (j, 0, t)
    {
        fr (i, 0, n - 1)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                // i++;
            }
        }
        cout << s << '\n';
    }

    cout << s << '\n';
    
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