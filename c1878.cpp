
#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve()
{
    ll n, k, x; cin >> n >> k >> x;
    // if (x <= (n * (n + 1)) && (x / k) < n)
    // {
    //     // if ((x / k) >= (n/ 2)) cout << "NO"  << '\n';
    //     // if (x < (k * (k + 1))) cout << "YES"  << '\n';
    //     // else cout << "NO" << '\n';
    //     cout << "YES"  << '\n';
    // } 
    // else cout << "NO" << '\n';

    if (x >= (k * (k + 1) / 2) && x <= (n * (n + 1) / 2 - ((n - k)) * (n - k + 1) / 2)) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    // cout << (k * (k + 1) / 2) << '\n';
    // cout << (k *n - k) << '\n';
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