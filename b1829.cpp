#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x; cin >> n;
    int count = 0, longest = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            count++;
            longest = max(longest, count);
        }
        else 
        {
            count = 0;
        }
    }   
    cout << longest << '\n';
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