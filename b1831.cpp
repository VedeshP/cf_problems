#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
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
#include <functional>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    int n; cin >> n;
    vll a(n), b(n);
    fr (i, 0, n) cin >> a[i];
    fr (i, 0, n) cin >> b[i];

    if (n == 1)
    {
        if (a[0] == b[0]) cout << 2 << '\n';
        else cout << 1 << '\n';
        return;
    }

    vll acon(2*n + 1, 0), bcon(2*n + 1, 0);
    
    ll c = 1;
    fr (i, 1, n)
    {
        if (a[i] == a[i - 1])
        {
            c++;
        }
        else
        {
            acon[a[i - 1]] = max(acon[a[i - 1]], c);
            c = 1;
        }
    }
    acon[a[n - 1]] = max(acon[a[n - 1]], c);

    c = 1;

    fr (i, 1, n)
    {
        if (b[i] == b[i - 1])
        {
            c++;
        }
        else
        {
            bcon[b[i - 1]] = max(bcon[b[i - 1]], c);
            c = 1;
        }
    }
    bcon[b[n - 1]] = max(bcon[b[n - 1]], c);

    ll max_freq = -1;

    fr (i, 1, 2*n)
    {
        max_freq = max(max_freq, acon[i] + bcon[i]);
    }

    cout << max_freq << '\n';






    // int n; cin >> n;
    // vi a(n);
    // vi b(n);
    // fr (i, 0, n) cin >> a[i];
    // fr (i, 0, n) cin >> b[i];

    // map<int, int> acon, bcon, ans;

    // if (n == 1)
    // {
    //     if (a[0] == b[0])
    //     {
    //         cout << 2 << '\n';
    //     }
    //     else cout << 1 << '\n';

    //     return;
    // }

    // fr (i, 1, n)
    // {
    //     if (a[i] == a[i - 1])
    //     {
    //         if (acon.find(a[i]) != acon.end())
    //         {
    //             acon[a[i]]++;
    //         }
    //         else
    //         {
    //             acon[a[i]] = 2;
    //         }
    //     }
    //     else
    //     {
    //         if (acon.find(a[i]) != acon.end())
    //         {
    //             acon[a[i]] = max(acon[a[i]], 1);
    //         }
    //         else
    //         {
    //             acon[a[i]] = 1;
    //         }
    //     }
    // }

    // fr (i, 1, n)
    // {
    //     if (b[i] == b[i - 1])
    //     {
    //         if (bcon.find(b[i - 1]) != bcon.end())
    //         {
    //             bcon[b[i - 1]]++;
    //         }
    //         else
    //         {
    //             bcon[b[i - 1]] = 2;
    //         }
    //     }
    //     else
    //     {
    //         if (bcon.find(b[i - 1]) != bcon.end())
    //         {
    //             bcon[b[i - 1]] = max(bcon[b[i]], 1);
    //         }
    //         else
    //         {
    //             bcon[b[i]] = 1;
    //         }
    //     }
    // }
    // // fr (i, 1, n)
    // // {
    // //     if (a[i] == a[i - 1])
    // //     {
    // //         acon[a[i]]++;
    // //     }
    // //     else
    // //     {
    // //         acon[a[i]] = 1;
    // //     }
    // // }
    // // if (a[n - 1] == a[n - 2])
    // // {
    // //     acon[a[n - 1]]++;
    // // }
    // // else 
    // // {
    // //     acon[a[n - 1]] = 1;
    // // }
    // // fr (i, 1, n)
    // // {
    // //     if (b[i] == b[i - 1])
    // //     {
    // //         bcon[b[i]]++;
    // //     }
    // //     else
    // //     {
    // //         bcon[b[i]] = 1;
    // //     }
    // // }
    // // if (b[n - 1] == b[n - 2])
    // // {
    // //     bcon[b[n - 1]]++;
    // // }
    // // else 
    // // {
    // //     bcon[b[n - 1] = max(bcon[b[n - 1]], 1)];
    // //     bcon[b[n - 1]] = 1;
    // // }

    
    // cout << "acon: ";
    // for (auto it : acon)
    // {
    //     cout << it.first << ' ' << it.second << ',';
    // }
    // cout << '\n' << "bcon: ";
    // for (auto it : bcon)
    // {
    //     cout << it.first << ' ' << it.second << ',';
    // }
    // // map<int, int> ans;
    // for (auto it : acon)
    // {
    //     if (bcon.find(it.first) != bcon.end())
    //     {
    //         ans[it.first] = it.second + bcon[it.first];
    //     }
    //     else
    //     {
    //         ans[it.first] = it.second;
    //     }
    // }
    // cout << '\n' << "ans: ";
    // for (auto it : ans)
    // {
    //     cout << it.first << ' ' << it.second << ',';
    // }

    // int maxans = INT_MIN;
    // for (auto it : ans)
    // {
    //     if (it.second > maxans)
    //     {
    //         maxans = it.second;
    //     }
    // }
    // cout << maxans << '\n';
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
