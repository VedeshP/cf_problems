#include <vector>
#include <iostream>

using namespace std;

void solve();

int main(void)
{
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++)
    {
        solve();
    }
}

void solve()
{
    int n; cin >> n;
    if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0)
    {
        cout << "First" << '\n';
        return;
    }
    cout << "Second" << '\n';
}