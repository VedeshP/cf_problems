#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

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
    // want to see if i get tle and how would it look like
    ll n, x; cin >> x >> n;
    // fr(i, 1, n + 1)
    // {
    //     if (x % 2 == 0) x -= i;
    //     else x += i;
    // }
    // int ans;
    // int log4n = ceil(1.0 * (log(n) / log(4)));
    // int log3n = ceil(1.0 *)
    // if (x % 2 == 0)
    // {

    // }

    ll final_pos;
    if (n % 4 == 1) final_pos = -n;
    else if (n % 4 == 2) final_pos = 1;
    else if (n % 4 == 3) final_pos = n + 1;
    else if (n % 4 == 0) final_pos = 0;

    if (x % 2 == 0) cout << x + final_pos << '\n';
    else cout << x - final_pos << '\n';
    // cout << x << '\n';
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