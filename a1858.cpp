#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y>> z;
    if ((x+z)>(y+z))
    {
        cout << "First" << '\n';
    } 
    else if (x == y)
    {
        if (z % 2 == 0)
        {
            cout << "Second" << '\n';
        }
        else cout << "First" << '\n';
    }
    else cout << "Second" << '\n';
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