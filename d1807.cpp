#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (int i = a; i < b; i++)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <limits.h>

using namespace std;

void solve()
{
    int n, q; cin >> n >> q;
    vector<ll> vt(n);
    ll sum = 0;
    fr(i, 0, n)
    {
        cin >> vt[i];
        sum += vt[i];
    } 
    vector<ll> prefix(n + 1, 0);
    fr(i, 1, n + 1)
    {
        prefix[i] = prefix[i - 1] + vt[i - 1];
    }
    fr(i, 0, q)
    {
        ll l, r, k; cin >> l >> r >> k;
        ll remove = prefix[r] - prefix[l - 1];
        ll add = (r - l + 1) * k;
        ll total = sum - remove + add;
        if (total % 2 != 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
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