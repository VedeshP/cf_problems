// #define ll long long
// #define pii pair<int,int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vll vector<ll>

// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// #define sz(x) (ll)(x).size()
// #define srt(a) sort((a).begin(),(a).end())
// #define revsrt(a) sort((a).rbegin(), (a).rend())
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define setbits(x) __builtin_popcountll(x)
// ll MOD=1000000007;

// #define fr(i, a, b) for (ll i = a; i < b; i++)
// #define _fr(i, a, b) for (ll i = a; i > b; i--)

// #define inp(a, n) fr(i, 0, n) cin >> a[i];
// #define outp(a, n) fr(i, 0, n) { cout << a[i] << ' '; } cout << '\n';

// #define out_NO cout << "NO" << '\n';
// #define out_YES cout << "YES" << '\n';

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>
// #include <utility>
// #include <algorithm>
// #include <functional>
// #include <queue> // also has priority queue
// #include <deque>
// #include <iomanip> // required for setprecision
// #include <stack>
// #include <numeric>
// #include <string>
// #include <limits.h>
// #include <cmath>
// #include <cctype>
// #include <map>
// #include <set>
// #include <cstring>

// using namespace std;

// int gcd(int a,int b)
// {
//     if(b == 0) return a;
//     else return gcd(b, a % b);
// }

// int lcm(int a,int b)
// {
//     return a * b / gcd(a, b);
// }

// ll dp[35][2][2];
// int choice[35][2][2];

// ll f(int curr , int tight1 , int tight2 , string& s){
//     if(curr==s.length()) return 0;
    
//     if(dp[curr][tight1][tight2]!=-1) return dp[curr][tight1][tight2];
    
//     int currbit = s[curr]-'0';
    
//     int till1 = tight1?currbit:1;
//     int till2 = tight2?currbit:1;
    
//     ll ans = LLONG_MIN;
//     int best = 0;
    
//     fr(i,0,till1+1){
//         int y = i^currbit;
//         if(y>till2) continue;
        
//         int ntight1 = (tight1&&(i==till1));
//         int ntight2 = (tight2&&(y==till2));
        
//         ll temp = f(curr+1,ntight1,ntight2,s);
//         if(temp==LLONG_MIN) continue;
        
//         int idx = (s.size()-1-curr);
//         long long add = 1LL*(i+y)*(1LL<<idx);
        
//         ll me = add+temp;
//         if(me>ans){
//             ans = me;
//             best = i;
//         }
        
//     }
    
//     choice[curr][tight1][tight2] = best;
//     return dp[curr][tight1][tight2] = ans;
    
// }



// void solve()
// {
//     int n,k;
//     cin>>n>>k;
        
//     if(k&1){
//         fr(i,0,k) cout<<n<<" ";
//         cout<<endl;
//     }
//     else{
//         fr(i,0,k-2) cout<<n<<" ";
//         string s;
        
//         _fr(i,30,-1){
//             if(n&(1<<i)) s.push_back('1');
//             else s.push_back('0');
//         }
        
//         memset(dp,-1,sizeof(dp));
//         memset(choice,-1,sizeof(choice));
        
//         f(0,1,1,s);
        
//         int x = 0;
//         int tight1 = 1;
//         int tight2 = 1;
        
//         fr(i,0,31){
//             int currbit = s[i]-'0';
//             int till1 = tight1?currbit:1;
//             int till2 = tight2?currbit:1;
    
//             int xb = choice[i][tight1][tight2];
//             int yb = xb^currbit;
    
//             int idx = (30-i);
//             x|=(xb<<idx);
    
//             tight1 = tight1&&(xb==till1);
//             tight2 = tight2&&(yb==till2);
//         }
        
//         int y = x^n;
        
//         cout<<x<<" "<<y<<endl;
        
        
//     }
    
// }

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         solve();
//     }
// }

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
    ll n, k; cin >> n >> k;
    if (k % 2 != 0)
    {
        fr (i, 0, k)
        {
            cout << n << " ";
        }
        cout << '\n';
        return;
    }
    else
    {

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
