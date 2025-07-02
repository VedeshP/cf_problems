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
    ll n; cin >> n;
    string s; cin >> s;
    if (s[0] != 'm' && s[0] != 'M')
    {
        // cout << "hello";
        out_NO
        return;
    }
    char curr = 'm';
    string meow = "meow";
    string ans;
    fr (i, 0, n)
    {
        // cout << (char) (tolower(s[i]));
        char currchar = tolower(s[i]);
        // cout << currchar;
        if (currchar == curr) continue;
        else
        {
            // cout << curr << "<-";
            if (curr == 'm' && currchar != 'e')
            {
                out_NO
                return;
            }
            else if (curr == 'e' && currchar != 'o')
            {
                out_NO
                return;
            }
            else if (curr == 'o' && currchar != 'w')
            {
                out_NO
                return;
            }
            else if (curr == 'w' && currchar != 'w')
            {
                out_NO
                return;
            }
            else 
            {
                ans += curr;
                curr = currchar;
            }
        }
    }
    ans += (char) tolower(s[n - 1]);
    // cout << ans << ' ';
    if (meow == ans)
    {
        out_YES
    }
    else{
        out_NO
    }
    
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
