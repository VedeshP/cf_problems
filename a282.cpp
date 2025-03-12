#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

// void solve()
// {

// }

int main(void)
{
    // int q;
    // cin >> q;
    // for (int i = 0; i < q; i++)
    // {
    //     solve();
    // }
    int n; cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        if (s == "X++") x++;
        if (s == "++X") ++x;
        if (s == "--X") --x;
        if (s == "X--") x--;
    }
    cout << x << '\n';
}