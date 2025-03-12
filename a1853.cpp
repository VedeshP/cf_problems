#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> vt(n);
    int mindel = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    for (int i = 1; i < n; i++)
    {
        mindel = min(vt[i] - vt[i-1], mindel);
        if (mindel < 0) 
        {
            cout << 0 << '\n';
            return;
        }
    }
    cout << (mindel/2) + 1 << '\n';

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