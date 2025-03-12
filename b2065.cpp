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
    string s;
    cin >> s;
    int len = s.size();
    if (len > 3)
    {
        for (int i = 0; i < len - 2; i++)
        {
            // ans++;
            if (s[i] == s[i+1])
            {
                cout << i << '\n';
                return;
            }
        }
    }
    else if (len == 3)
    {
        if (s[1] == s[2])
        {
            cout << 1 << '\n';
            return;
        }
    }
    else if (len == 2)
    {
        if (s[0] == s[1])
        {
            cout << 1 << '\n';
            return;
        }
    }
    cout << s.size() << '\n';
}