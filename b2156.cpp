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

// ll cycle(ll val)
// {

//     return val;
// }

void solve()
{
    ll n, q; cin >> n >> q;
    string s; cin >> s;
    vll qarr(q); inp(qarr, q);

    // fr (i, 0, q)
    // {
    //     ll ans = 0;
    //     ll curr = qarr[i];
    //     // ll ncurr = curr;
    //     ll ptr = 0;
    //     fr (j, 0, n)
    //     {
    //         if (s[j] == 'A') curr--;
    //         else curr /= 2;

    //         ans++;
    //         if (curr == 0)
    //         {
    //             break;
    //         }
    //     }
    //     if ((qarr[i] - curr) > curr)
    //     {
    //         if (curr != 0)
    //         {
    //             fr (j, 0, n)
    //             {
    //                 if (s[j] == 'A') curr--;
    //                 else curr /= 2;

    //                 ans++;
    //                 if (curr == 0)
    //                 {
    //                     break;
    //                 }
    //             }
    //         }
    //         // cout << "idhar" << '\n';
    //     }
    //     else
    //     {
    //         ll got = qarr[i] - curr;
    //         // qarr[i] -= got;
    //         ll the = curr / got;
    //         ans += the * n;
    //         curr -= the * got;
    //         if (curr != 0)
    //         {
    //             fr (j, 0, n)
    //             {
    //                 if (s[j] == 'A') curr--;
    //                 else curr /= 2;

    //                 ans++;
    //                 if (curr == 0)
    //                 {
    //                     break;
    //                 }
    //             }   
    //         }
    //         // cout << "idhar" << '\n';
    //     }
    //     cout << ans << '\n';
    // }
    
    ll bcnt = 0;
    fr(i, 0, n)
    {
        if (s[i] == 'B') bcnt++;
    }
    if (bcnt == 0)
    {
        fr (i, 0, q)
        {
            cout << qarr[i] << '\n';
        }
        return;
    }

    // vll sub;
    // ll curra = 0;
    // for (char c : s)
    // {
    //     if (c=='A')
    //     {
    //         curra++;
    //     }   
    //     else
    //     {
    //         sub.PB(curra);
    //         curra = 0;
    //     }
    // }
    // sub.PB(curra);

    // auto cycle = [&](ll val)
    // {
    //     val -= sub[0];
    //     fr (i, 1, sz(sub))
    //     {
    //         if (val <= 0)
    //         {
    //             return 0ll; // really imp my friend
    //         }
    //         val /= 2;
    //         val -= sub[i];
    //     }
    //     return val;
    // };

    // // shall use it
    // for (ll a : qarr)
    // {
    //     ll curr = a;
    //     ll ans = 0;

    //     ll the = 2 * n;
    //     // kuch bhi 
    //     while (curr > the)
    //     {
    //         ll next = cycle(curr);
    //         if (next >= curr) break;

    //         curr = next;
    //         ans += n;
    //     }

    //     while (curr > 0)
    //     {
    //         ll mcidx = ans % n;
    //         if (s[mcidx] == 'A')
    //         {
    //             curr--;
    //         }
    //         else curr /= 2;

    //         ans++;
    //     }
    //     cout << ans << '\n';
    // }
    fr (i, 0, q)
    {
        ll ans = 0;
        ll curr = qarr[i];

    
        while (curr > 0)
        {

            fr (j, 0, n)
            {
    
                if (curr <= 0)
                {
                    break;
                }

                if (s[j] == 'A')
                {
                    curr--;
                }
                else
                {
                    curr /= 2;
                }
                ans++;
            }
        }
        cout << ans << '\n';
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
