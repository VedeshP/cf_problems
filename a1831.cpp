#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << n + 1 - x << ' ';
    }
    cout << '\n';
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