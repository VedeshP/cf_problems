#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i< n; i++)
    {
        int x; cin >> x;
        sum += x;
    }
    cout << (sum - (n - 1)) << '\n';
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