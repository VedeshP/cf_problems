#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == (n * x))
    {
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';
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