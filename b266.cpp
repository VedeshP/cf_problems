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



    vi bpos;
    fr (i, 0, n)
    {
        if (s[i] == 'B') bpos.PB(i);
    }


    // fr (j, 0, t)
    {
        fr (i, 0, bpos.size())
        {
            ll x = bpos[i];
            ll y = t;
            while (x < n && y > 0)     
            {
                if (s[x + 1] == 'G')
                {
                    s[x + 1] = 'B';
                    // y--;
                    s[x] = 'G';
                    x++;
                }
                y--;
                // if (s[x + 1] == 'B')
                // {
                //     break;
                // }
            }
        }
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