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
    int n, x;
    cin >> n >> x;
    vector<int> vt(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }

    int max_diff = vt[0];
    for (int i = 0; i < n - 1; i++)
    {
        max_diff = max(max_diff, (vt[i+1] - vt[i]));
    }
    max_diff = max(max_diff, 2 * (x - vt[n - 1]));

    cout << max_diff << '\n';
}