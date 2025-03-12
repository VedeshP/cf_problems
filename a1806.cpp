#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (b > d)
    {
        cout << -1 << '\n'; return;
    } 
    if (b == d && a < c)
    {
        cout << -1 << '\n'; return;
    }
    if (b == d && a == c)
    {
        cout << 0 << '\n'; return;
    }
    if (a - c == 0 && b < d)
    {
        cout << 2 * (d - b) << '\n'; return;
    }
    // if (a - c == b - d && c > a)
    // {
    //     cout << a - c << '\n'; return;
    // }
    // if (abs(a - c) == abs(b - d))
    // {
    //     cout << 3 * abs(a - c) << '\n'; return;
    // }
    if (a == c && b > d)
    {
        cout << -1 << '\n'; return;
    }
    if ((d - b) / (c - a) < 1 && c > a)
    {
        cout << -1 << '\n'; return;
    }
    // if ((d - b) / (c - a) == 1 && b > d)
    // {
    //     cout << -1 << '\n'; return;
    // }
    else 
    {
        cout << (2 * (d - b)) + (a - c) << '\n';
        // cout << d-b << " " << c-a << '\n';
        // cout << (d - b) / (c - a) << '\n';
        // cout << "condition" << '\n';
    }
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