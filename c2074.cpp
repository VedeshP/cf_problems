#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int x; cin >> x;
    int y = (x + 1) / 2;
    if ((x ^ y) < (x + y)) cout << y << '\n';
    else cout << -1 << '\n';
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