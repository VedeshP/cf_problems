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

void solve()
{
    ll n, k; cin >> n >> k;
    if (k < n - 2 || k > n - 1)
    {
        cout << "NO" << '\n';
        return;
    }
    vll ans;
    ans.PB(1);
    ll pair = 0;
    while (ans.size() < n)
    {
        if (pair == k)
        {
            if (ans[ans.size() - 1] == 1)
            {
                ans.PB(-1);
            }
            else 
            {
                ans.PB(1);
            }
        }
        else
        {
            ans.PB(1);
            ans.PB(1);
            pair++;
        }
    }

    cout << "YES" << '\n';
    fr (i, 0, ans.size()) cout << ans[i] << ' ';
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
