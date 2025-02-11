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
// since 1 to n only - this is most optimized
void solve()
{
    int n; cin >> n;
    vector<int> vt(n, 0);
    for (int i = 0; i < n; i++) {cin >> vt[i];}
    if (vt[0] == 1)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n'; return;
}