#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve()
{
    ll a, b, n, x; cin >> a >> b >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans += min(a - 1, x);
    }
    ans += b;
    cout << ans << '\n';
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