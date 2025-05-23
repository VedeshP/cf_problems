#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

#define F first
#define S second
#define PB push_back

#define fr(i, a, b) for (ll i = a; i < b; i++)
#define _fr(i, a, b) for (ll i = a; i > b; i--)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits.h>
#include <cmath>
#include <map>
#include <set>

using namespace std;

// int flen(int start, int end, string s)
// {
//     set<char> st;
//     fr (i, start, end)
//     {
//         st.insert(s[i]);
//     }

//     return st.size();
// }

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    vll pre(n + 1, 0);
    vll suff(n + 1, 0);
    // vll ans(n + 1, 0);

    set<char> st;

    fr (i, 1, n + 1)
    {
        st.insert(s[i - 1]);
        pre[i] = st.size();
    }

    st.clear();

    _fr(i, n, 0)
    {
        st.insert(s[i - 1]);
        suff[i] = st.size();
    }

    ll ans = -1;

    fr (i, 0, n)
    {
        ans = max(ans, (pre[i] + suff[i + 1]));
    }

    cout << ans << '\n';

    // fr (i, 0, pre.size()) cout << pre[i] << ' ';
    // cout << '\n';
    // fr (i, 0, suff.size()) cout << suff[i] << ' ';
    // cout << '\n';
    // fr (i, 0, ans.size()) cout << ans[i] << ' ';
    // cout << '\n';

    // cout << *max_element(ans.begin(), ans.end()) << '\n';
    // vll pivot(n, 0);

    // ll non_rep_idx = 0;
    // set<char> st;
    // fr (i, 0, n)
    // {
    //     if (st.find(s[i]) != st.end())
    //     {
    //         non_rep_idx = i;
    //         break;
    //     }
    //     else st.insert(s[i]);
    // }

    // fr (i, non_rep_idx, n)
    // {
    //     int fa = flen(0, i, s);
    //     int fb = flen(i, n, s);
    //     pivot[i] = fa + fb;
    // }

    // cout << *max_element(pivot.begin(), pivot.end()) << '\n';
}

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}
