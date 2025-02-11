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
    vector<int> vt(n, 0);
    for (int i = 0; i < n; i++) {cin >> vt[i];}
    for (int i = 1; i < n; i++)
    {
        if (vt[i] < vt[0])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
    return;
}