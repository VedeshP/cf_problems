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
    int n;
    cin>>n;
    
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++) cin>>nums[i];
    
    string s;
    cin>>s;
    
    if(s[0]=='1'||s[n-1]=='1'){
        cout<<-1<<endl;
        return;
    }
    
    int l,r;
    
    for(int i = 0 ; i < n ; i++){
        if(nums[i]==1) l = i;
        if(nums[i]==n) r = i;
    }
    
    if(s[l]=='1'||s[r]=='1'){
        cout<<-1<<endl;
        return;
    }
    
    if(l>r) swap(l,r);
    
    int pos,check=0;
    
    for(int i = 0 ; i < l ; i++){
        if(s[i]=='1'){
            pos = i;
            check = 1;
            break;
        }
    }
    
    vector<pair<int,int>> ans;
    ans.push_back({l+1,r+1});
    
    if(check){
        ans.push_back({pos,l+1});
        ans.push_back({pos,r+1});
    }
    
    check = 0;
    
    for(int i = r+1 ; i < n ; i++){
        if(s[i]=='1'){
            pos = i;
            check = 1;
        }
    }
    
    if(check){
        ans.push_back({l+1,pos+2});
        ans.push_back({r+1,pos+2});
    }
    
    cout<<ans.size()<<endl;
    for(auto x:ans) cout<<x.first<<" "<<x.second<<endl;
    // ll n; cin >> n;
    // vll p(n); inp(p,n);
    // string x; cin >> x;


    // if (x[0] == '1' || x[n - 1] == '1')
    // {
    //     cout << -1 << '\n';
    //     return;
    // }
    // vll one;
    // fr (i, 0, n)
    // {
    //     // one += (x[i] == '1' ? 1 : 0);
    //     if (x[i] == '1') one.PB(i);
    //     if (x[i] == '1')
    //     {
    //         if (p[i] == 1 || p[i] == n)
    //         {
    //             cout << -1 << '\n';
    //             return;
    //         }
    //     }
    // }
    // if (one.empty())
    // {
    //     cout << 0 << '\n';
    //     return;
    // }

    // ll ansl, ansr;
    // fr (i, 0, n)
    // {
    //     if (p[i] == 1) ansl = i;
    //     if (p[i] == n) ansr = i;
    // }

    // if (ansl > ansr)
    // {
    //     swap(ansl, ansr);
    // }

    // fr (i, 0, sz(one))
    // {
    //     if (one[i] < ansl)
    //     {
    //         cout << 2 << '\n';
    //         cout << one[i] - 1 << ' ' << ansl << '\n';
    //         cout << one[i] - 1 << ' ' << ansr << '\n';
    //         return;
    //     }
    // }
    
    // ll one = 0;
    // vll one;
    // fr (i, 0, n)
    // {
    //     // one += (x[i] == '1' ? 1 : 0);
    //     if (x[i] == '1') one.PB(i);
    // }
    // // if (sz(one) == 0) 
    // if (one.empty())
    // {
    //     cout << 0 << '\n';
    //     return;
    // }
    // if (x[0] == '1' || x[n - 1] == '1')
    // {
    //     cout << -1 << '\n';
    //     return;
    // }

    // ll f1 = one.front();
    // ll l1 = one.back();

    // vector<pll> pref_mn(n);
    // vector<pll> pref_mx(n);

    // pref_mn[0] = {p[0], 0};
    // pref_mx[0] = {p[0], 0};

    // fr (i, 1, n)
    // {
    //     if (p[i] < pref_mn[i - 1].F)
    //     {
    //         pref_mn[i] = {p[i], i};

    //     }
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
