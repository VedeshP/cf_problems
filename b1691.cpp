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

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <algorithm>
#include <functional>
#include <stack>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

void solve()
{
    ll n; cin >> n;
    vll vt(n);

    map<ll, ll> freq;

    fr(i, 0, n) cin >> vt[i];

    fr (i, 0, n) freq[vt[i]]++;

    // for (auto its : freq) 
    // {cout << its.F << " " << its.S << ",";}
    // cout << '\n';

    ll isnotvalid = 0;
    for (auto it : freq)
    {
        if (it.S == 1)
        {
            isnotvalid = 1;
            break;
        }
    }

    if (isnotvalid)
    {
        cout << -1 << '\n';
        return;
    }

    vll idx(n);
    fr (i, 0, n) idx[i] = i + 1;

    ll l = 0, r = 0;
    while (r < n)
    {
        if (vt[l] == vt[r])
        {
            r++;
        }
        else
        {
            rotate(idx.begin() + l, idx.begin() + l + 1, idx.begin() + r);
            l = r;
        }
    }
    rotate(idx.begin() + l, idx.begin() + l + 1, idx.begin() + r);

    fr (i, 0, idx.size())
    {
        cout << idx[i] << ' ';
    }
    cout << '\n';
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
