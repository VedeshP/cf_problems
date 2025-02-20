#include <iostream>
#include <cstring>

using namespace std;


void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int one_count = 0;
    int diff_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') one_count++;
        if (i != n - 1)
        {
            if (s[i] != s[i+1])
            {
                diff_count++;
            }
        }
    }
    if (one_count == n) cout << 1;
    else if (s[0]=='1')
    {
        cout << diff_count + 1;
    }
    else cout << diff_count;
    cout << '\n';
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