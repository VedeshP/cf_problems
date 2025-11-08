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
    string s; cin >> s;
    ll mxo = 0;
    ll onec = 0;
    s+=s; // which i was thinking before = should have implemented it 
    fr (i, 0, sz(s))
    {
        // smarter ways of  writing code 
        onec = s[i] == '1' ? onec + 1 : 0;
        mxo = max(onec, mxo);
        // if (s[i] == '1')
        // {
        //     ++onec;
        //     mxo = max(mxo, onec);
        // }
        // else 
        // {
        //     onec = 0;
        // }
        // // cout << onec << '\n';
        // cout << mxo << '\n';
        // if (i == (sz(s) - 1) && onec != sz(s))
        // {
        //     if (s[i] == '1' && s[0] == '1') 
        //     {
        //         ++onec;
        //         mxo = max(mxo, onec);
        //     }
        // }
    }
    // cout << mxo << '\n';
    // if (mxo == 0) 
    // {
    //     cout << 0 << '\n';
    //     return;
    // }
    ll n = sz(s) / 2;
    if (mxo > (n))
    {
        cout << (n) * (n) << '\n';
        return;
    }
    // cout << ceil((((1.0 * mxo) + 1) / 2)) * ((mxo + 1) / 2) << '\n';
    ll x = (mxo + 2) / 2;
    ll y = (mxo + 1) / 2;
    cout << x * y << '\n';

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


// #include <bits/stdc++.h>

// using namespace std;
// // using ll = long long;

// int main() {
//     ios::sync_with_stdio(0); cin.tie(0);

//     int t = 1;
//     cin >> t;
//     while (t--) {
//         string s; cin >> s; s += s;
//         int k = 0, z = 0;
//         for (char c : s) {
//             z = c == '1' ? z+1 : 0;
//             k = max(k, z);
//         }
//         const int n = s.size() / 2;

//         if (k > n) {
//             cout << (ll)n*n << '\n';
//         } else {
//             const ll side_a = (k+1)/2;
//             const ll side_b = (k+2)/2;
//             cout << side_a * side_b << '\n';
//         }
//     }
// }