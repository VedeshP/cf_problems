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

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<ll> vt(n);
    fr(i, 0, n)
    {
        cin >> vt[i];
    }
    ll mini = vt[0], maxi = vt[0];
    fr(i, 0, n)
    {
        mini = min(vt[i], mini);
        maxi = max(vt[i], maxi);
    }
    cout << maxi - mini << '\n';
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