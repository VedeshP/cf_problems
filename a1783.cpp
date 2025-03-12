#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0] == a[n - 1])
    {
        cout << "No" << '\n';
    }
    else 
    {
        cout << "Yes" << '\n';
        cout << a[n - 1] << " ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
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