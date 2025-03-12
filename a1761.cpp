#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, a, b; cin >> n >> a >> b;
    if (n == a && a == b)
    {
        cout << "Yes" << '\n'; return;
    } 
    if (n - (a + b) >= 2) cout << "Yes" << '\n';
    else cout << "No" << '\n';
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