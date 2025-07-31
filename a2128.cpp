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

void solve()
{
    ll n, c; cin >> n >> c;
    vll vt(n);
    fr (i, 0, n) cin >> vt[i];

    // editorial was nice - my logic was correct - why i was not able to implement is still a question
    sort(vt.rbegin(), vt.rend());
    int out = 0;
    for (ll x : vt)
    {
        if (x * (1LL << out) <= c)
        {
            ++out;
        }
    }
    cout << n - out << '\n';
    // sort(vt.begin(), vt.end());
    // // fr (i, 0, n) cout << vt[i] << ' ';
    // ll end = n - 1;
    // ll coins = 0;
    // while (vt[end] > c && end > -1)
    // {
    //     coins++; end--;
    // }

    // ll x = 1;
    // while (vt[end] * x > c && end > -1)
    // {
    //     coins++; x *= 2; end--;
    // }
    // while (vt[end] > c && end > -1)
    // {
    //     coins++; end--;
    // }
    // // if (vt[end] == c) end++;
    // while (end > 0)
    // {
    //     // cout << "vt: " << vt[end] << ' ';
    //     if (c < vt[end])
    //     {
    //         // cout << "vt: " << vt[end] << ' ';
    //         coins++;
    //     }
    //     end--;
    //     fr (i, 0, end) vt[i] *= 2;
    //     // end--;
    // }
    // fr (i, 0, n) cout << vt[i] << ' ';
    // cout << coins << '\n';
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
