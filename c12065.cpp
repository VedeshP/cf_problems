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
    int n, m;
    cin >> n >> m;
    vector<int> vt1(n, 0);
    vector<int> vt2(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vt1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> vt2[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (vt1[i] > vt1[i+1])
        {
            vt1[i] = vt2[0] - vt1[i];
        }
    }
    if (vt1[n - 2] > vt1[n - 1])
    {
        vt1[n - 1] = vt2[0] - vt1[n - 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (vt1[i] > vt1[i+1])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}