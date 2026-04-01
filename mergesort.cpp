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

// lecture from rohit2593

// void solve()
// {

// }

vll merge(vll left, vll right)
{
    vll merged(sz(left) + sz(right));

    int i = 0, j = 0, k = 0;
    while (i < sz(left) && j < sz(right))
    {
        if (left[i] <= right[j])
        {
            merged[k++] = left[i++];
        }
        else {
            merged[k++] = right[j++];
        }
    }

    while (i < sz(left))
    {
        merged[k++] = left[i++];
    }
    while (j < sz(right))
    {
        merged[k++] = right[j++];
    }

    return merged;
}

vll mergesort(vll a)
{
    if (sz(a) <= 1) return a;

    int mid = sz(a) / 2;

    vll left = vll(a.begin(), a.begin() + mid);
    vll right = vll(a.begin() + mid, a.end());

    return merge(mergesort(left), mergesort(right));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    //     solve();
    // }

    // vll a = {4, 5, 9, 8, 1, 2, 6, 7, 3};
    vll a(9);
    inp(a, 9);
    vll sorted = mergesort(a);

    // cout << sz(sorted) << '\n';
    outp(sorted, sz(sorted));
}
