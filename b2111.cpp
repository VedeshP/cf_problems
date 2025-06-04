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
#include <string>
#include <limits.h>
#include <cmath>
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

void solve()
{
    vll fibo = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    vll vols ={0, 1, 1, 8, 27, 125, 512, 2197, 9261, 39304, 166375};
    vll volfix = {0, 1, 2, 10, 37, 162, 674, 2871, 12132, 51436, 217811};
    ll n, m; cin >> n >> m;
    // vector<vector<int>> wlh(m, vector<int>(3));
    // fr (i, 0, n)
    // {
    //     ll w, l, h;
    //     cin >> w >> l >> h;
    //     wlh[i][0] = w;
    //     wlh[i][1] = l;
    //     wlh[i][2] = h;
    // }

    fr (x, 0, m)
    {
        ll w, l, h; cin >> w >> l >> h;
        ll fitcount = n;

        while (fitcount > 0)
        {
            if (h < fibo[fitcount])
            {
                break;
            }
            if (w * l < fibo[fitcount - 1] * fibo[fitcount - 1])
            {
                fitcount--;
                continue;
            }
            w -= w - fibo[fitcount];
            l -= l - fibo[fitcount];
            h -= fibo[fitcount];
            fitcount--;
        }
        if (fitcount > 0) cout << 0;
        else cout << 1;
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
