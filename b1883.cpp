#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    unordered_map<char, int> mp(n);
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int odd = 0;
    for (auto ele : mp)
    {
        if (ele.second % 2 != 0) odd++;
    }
    if (odd > (k + 1)) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}

int main(void)
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        solve();
    }
}