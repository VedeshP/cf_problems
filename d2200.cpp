#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define sz(x) (ll)(x).size()
#define srt(a) sort((a).begin(),(a).end())
#define revsrt(a) sort((a).rbegin(), (a).rend())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define setbits(x) __builtin_popcountll(x)
ll MOD=1000000007;

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

#define inp(a, n) fr(i, 0, n) cin >> a[i];
#define outp(a, n) fr(i, 0, n) { cout << a[i] << ' '; } cout << '\n';

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

void solve()
{
    ll n , x , y; cin >> n >> x >> y;
    // vll a(n + 2);

    vll fixed, mid;

    fr (i, 0, n)
    {
        ll z; cin >> z;
        if (i >=x && i < y)
        {
            mid.PB(z);
        }
        else 
        {
            fixed.PB(z);
        }
    }

    if (sz(mid) > 0)
    {
        ll mnidx = -1;
        ll mn = INT_MAX;

        fr (i, 0, sz(mid))
        {
            if (mid[i] < mn){
                mn = mid[i];
                mnidx = i;
            }
        }

        rotate(mid.begin(), mid.begin() + mnidx, mid.end());

    }

    vll ans;

    if (sz(mid) == 0)
    {
        ans = fixed;
    }
    else 
    {
        ll split = sz(fixed);

        fr (i, 0, sz(fixed))
        {
            if (fixed[i] > mid[0])
            {
                split = i;
                break;
            }
        }

        fr (i, 0, split)
        {
            ans.PB(fixed[i]);
           
        }

        fr (i, 0, sz(mid)) ans.PB(mid[i]);

        fr (i, split, sz(fixed)) ans.PB(fixed[i]);
    }

    outp(ans, n);

    // fr (i, 0 , n + 2)
    // {
    //     ll z; cin >> z;
    //     if (i == x) {a[i] = 0;
    //         y++;
    //     }
    //     else if (i == y) a[i] = 0;
    //     else a[i] = z;
    // }
    
    // ll min_mid = *min_element(a.begin() + x, a.begin() + y);
    // a[x + 1] = min_mid;


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
