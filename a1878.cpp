#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (vt[i] == k)
        {
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
}

int main(void)
{
    int q;
    cin >> q;
    while(q--)
    {
        solve();
    }
}