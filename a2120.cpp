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

void solve()
{
    int l1, b1, l2, b2, l3, b3; cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    
    if (l1 == l2 && l2 == l3 && l3 == (b1 + b2 + b3))
    {
        out_YES
        return;
    }
    if (b1 == b2 && b2 == b3 && b3 == (l1 + l2 + l3))
    {
        out_YES
        return;
    }
    if ((l1 + l2) == (l1 + l3) && (l1 + l3) == b1 && b1 == (b2 + b3))
    {
        out_YES
        return;
    }
    if ((b1 + b2) == (b1 + b3) && (b1 + b3) == l1 && (l1 == l2 + l3))
    {
        out_YES
        return;
    }
    out_NO
    // double area = (l1 * b1) + (l2 * b2) + (l3 * b3);

    // double mxarea = max(((l1 * b1), (l2 * b2)), (l3 * b3));

    
    // double sum = l1 + l2 + l3 + b1 + b2 + b3;

    // if (floor(sqrt(area) == ceil(sqrt(area))) && sqrt(area) == sum / 4) out_YES
    // else out_NO
    // return;
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
