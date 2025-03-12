#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s; cin >> s;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            i++; j--;
        }
        else 
        {
            cout << j - i + 1 << '\n';
            return;
        }
    }
    cout << j - i + 1 << '\n';
    return;
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