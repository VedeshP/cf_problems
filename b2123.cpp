#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

#define out_NO cout << "NO" << '\n';
#define out_YES cout << "YES" << '\n';

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <algorithm>
#include <functional>
#include <queue> // also has priority queue
#include <deque>
#include <iomanip> // required for setprecision
#include <stack>
#include <numeric>
#include <string>
#include <limits.h>
#include <cmath>
#include <cctype>
#include <map>
#include <set>

using namespace std;

int gcd(int a,int b)
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int a,int b)
{
    return a * b / gcd(a, b);
}

bool mycompare(const pll& a, const pll& b)
{
    if (a.F != b.F)
    {
        return a.F > b.F;
    }
    return a.S < b.S;
}

void solve()
{
    ll n, j, k; cin >> n >> j >> k;
    vll vt(n);
    ll score = -1;
    fr (i, 0, n)
    {
        cin >> vt[i];
        if (i + 1 == j)
        {
            score = vt[i];
        }
    }
    if (k > 1)
    {
        out_YES
    }
    else if (k == 1 && score == *max_element(vt.begin(), vt.end()))
    {
        out_YES
    }
    else{
        out_NO
    }








    // vector<pll> vt;
    // // set<ll> seen;
    // ll score = -1;
    // fr (i, 0, n)
    // {
    //     ll x; cin >> x;
    //     // if (seen.find(x) == seen.end())
    //     // {
    //         vt.PB({x, i + 1});
    //         // seen.insert(x);
    //     // }
    //     if (i + 1 == j)
    //     {
    //         score = x;
    //     }
    // }
    
    // sort(vt.begin(), vt.end());


    // int weaker = 0;
    // fr (i, 0, n)
    // {
    //     if (vt[i].F < score)
    // }
    // fr (i, 0, n)
    // {
    //     cout << vt[i].F << ' ';
    // }
    // fr (i, 0, n)
    // {
    //     if (vt[i].F == score)
    //     {
    //         if (n - (i + 1) < k)
    //         {
    //             out_YES
    //             return;
    //         }
    //     }
    // }
    // out_NO

    // ll loc = n - 1;
    // _fr (i, 0, k)
    // {
    //     if (vt[i].F == score)
    //     {
    //         out_YES
    //         return;
    //     }
    //     loc--;
    // }
    // out_NO
    // bool win = false;
    // fr (i, 0, k)
    // {
    //     if (vt[i].S == j)
    //     {
    //         win = true;
    //         break;
    //     }
    // }
    // if (win)
    // {
    //     out_YES
    // }
    // else{
    //     out_NO
    // }
    // ll threshold = vt[k - 1].F;
    // if (score >= threshold)
    // {
    //     out_YES
    // }
    // else 
    // {
    //     out_NO
    // }
    // fr (i, 0, vt.size())
    // {

    //     if (vt[i].S == j)
    //     {
    //         if ((n - (i + 1) <= k))
    //         {
    //             out_YES
    //             return;
    //         }
    //         else
    //         {
    //             out_NO
    //             return;
    //         } 
    //     }
    // }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}
