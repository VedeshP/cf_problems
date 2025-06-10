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
#include <deque>
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
    int n; cin >> n;

    // insert front and back 
    bool begin = true;
    vll vt(n);
    int left = 0, right = n - 1;
    fr (i, 1, n + 1)
    {
        if (begin)
        {
            vt[left++] = i;
            begin = false;
        }
        else
        {
            vt[right--] = i;
            begin = true;
        }
    }

    fr (i, 0, vt.size()) cout << vt[i] << ' ';
    cout << '\n';
    return;
    // ll mini = 1, maxi = n, iter = 1;
    // vll vt;
    // // vt.PB(1);
    // ll begin = 1;
    // ll beginidx = 0;
    // while (vt.size() < n)
    // {
    //     if (begin == 1)
    //     {
    //         vt.insert(vt.begin() + beginidx, iter);
    //         begin = 0;
    //         beginidx++;
    //     }
    //     else
    //     {
    //         vt.insert(vt.begin() + beginidx, iter);
    //         begin = 1;
    //     }
    //     iter++;
    // }
    

    
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
