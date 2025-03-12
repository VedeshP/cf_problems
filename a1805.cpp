#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    // we know that bitwise XOR is associative, commutative and also distributive
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int axor = a[0];
    for (int i = 1; i < n; i++)
    {
        axor ^=a[i];
    }
    if (n % 2 == 0 && axor != 0) 
    {
        cout << -1 << '\n'; return;
    }
    cout << axor << '\n';
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