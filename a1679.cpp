#define ll long long
// #define int long long
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
 
using namespace std;
 
void solve()
{
    // too much frustrated by this problem - really - revisit later with fresh mind
    ll n; cin >> n;
    // 4x + 6y = n 
    // 2x + 3y = n / 2
    
    if (n % 2 != 0 || n == 2) 
    {
        cout << -1 << '\n'; 
        return;
    }
    if (n == 4 || n == 6) 
    {
        cout << 1 << " " << 1 << '\n';
        return;
    }
    ll max; ll min;
    // if ((n / 2) % 2 == 0) max = n / 4;
    // else max = ((n - 6) / 4) + 1;
    // if ((n / 2) % 3 == 0) min = n / 6;
    // else min = ((n - 4) / 6) + 1;
    max = n / 4;
    min = ceil(n * 1.0 / 6);
    cout << min << " " << max << '\n';
    // if (n == 4 || n == 6)
    // {
    //     cout << 1 << " " << 1 << '\n';
    //     return;
    // }
    // else if (n % 4 == 0 && n % 6 == 0) 
    // {
    //     max = n / 4; min = n / 6;
    // }
    // else if (n % 6 == 0 && n % 4 != 0)
    // {
    //     min = n / 6; max = (n - 6) / 4 + 1;
    // }
    // else if (n % 4 == 0 && n % 6 != 0)
    // {
    //     max = n / 4; min = (n - 4) / 6;
    //     n -= 6 * min;
    //     min += n / 4;
    // }
    // else 
    // {
    //     max = n / 4; min = (n / 6);
    //     if (n % 6 == 2) min++;
    //     else if (n % 6 == 4) min++;
    // }
    // cout << min << " " << max << '\n';
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