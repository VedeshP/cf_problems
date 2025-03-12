#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0) cout << "YES" << '\n';
    else if (n % 2 != 0 && k % 2 == 0) cout << "NO" << '\n';
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