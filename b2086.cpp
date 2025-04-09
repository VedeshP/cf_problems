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
    ll n, k , x; cin >> n >> k >> x;
    vector<ll> vt(n);
    ll vtsum = 0;
    fr(i, 0, n) 
    {
        cin >> vt[i];
        vtsum += vt[i];
    }
    if (vtsum * k < x)
    {
        cout << 0 << '\n';
        return;
    }
    ll sum = x;
    int count = 0;
    fr(i, 0, n)
    {
        sum -= vt[i];
        count++;
        if (sum <= 0)
        {
            break;
        }
    }
    if (sum <= 0 && count <= n)
    {
        cout << (n * k) - count + 1 << '\n';
    }
    else
    {
        ll some = x / vtsum;
        if (x - (some * vtsum) == 0)
        {
            cout << (n * k) - (some * n) + 1 << '\n';
        }
        else 
        {
            int nextcount = 0;
            ll left = x - (some * vtsum);
            // cout << left << '\n';
            // fr(i, 0, n)
            // {
            //     left -= vt[i];
            //     nextcount++;
            //     if (left <= 0)
            //     {
            //         break;
            //     }
            // }
            
            _fr(i, n - 1, -1)
            {
                left -= vt[i];
                nextcount++;
                if (left <= 0)
                {
                    break;
                }
            }
            // while (left > 0)
            // {
            //     left -= vt[nextcount % n];
            //     nextcount++;
            // }
            // cout << nextcount << '\n';
            cout << (n * k) - ((some * n) + nextcount) + 1 << '\n';
        }
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