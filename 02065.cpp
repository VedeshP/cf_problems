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
    if (s[len - 2] == 'u' && s[len - 1] == 's')
    {
        s[len - 2] = 'i';
        s[len - 1] = '\0';
    }
    s.resize(len - 1);
    cout << s << '\n';
}

// this is fully solved