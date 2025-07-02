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


bool is_prime(int n)
{
    if (n <= 1) {
        return false; 
    }
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}

void solve()
{
    int n; cin >> n;
    if (n > 2 && n % 2 == 0) out_YES
    else out_NO
    // if (is_prime(n) || n == 1) out_NO
    // else out_YES
    // if (n > 2) out_YES
    // else out_NO
    // if ((n / 2) % 2 == 0 && n % 2 == 0) out_YES
    // else out_NO
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
        solve();
    // }
}
