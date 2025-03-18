#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve()
{
    ll n; cin >> n;
    ll ans = 0;
    for (long long i = 1; i <=n; i++)
    {
        if (n % i == 0) ans++;
        else break;
    }
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

