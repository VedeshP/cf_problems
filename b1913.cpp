#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>

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
    int zero = 0, one = 0;
    fr (i, 0, n)
    {
        if (s[i] == '0') zero++;
        else one++;
    }
    if (zero == one)
    {
        cout << 0 << '\n';
    }
    else 
    {
        int i = 0;
        while (i < n)
        {
            if (s[i] == '0')
            {
                if (!one) break;
                else one--;
            } 
            else 
            {
                if(!zero) break;
                else zero--;
            }
            i++;
        }

        cout << s.size() - i << '\n';
    }
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