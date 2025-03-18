#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve()
{
    int n; cin >> n;
    vi vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    if (n % 2 == 0) 
    {
        cout << 2 << '\n';
        cout << 1 << " " << n << '\n';
        cout << 1 << " " << n << '\n';
    }
    else 
    {
        cout << 4 << '\n';
        cout << 1 << " " << n - 1 << '\n';
        cout << 1 << " " << n - 1 << '\n';
        cout << n - 1 << " " << n << '\n';
        cout << n - 1 <<" " << n << '\n';
    }

    // know that even times xor is always 0
    // and 0 xor any number is number itself
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