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
    int n;
    string s;
    cin >> n;
    cin >> s;
    int cont_count = 0;
    int emp_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            cont_count++;
            if (cont_count > 2)
            {
                cout << 2 << '\n';
                return;
            }
            emp_count++;
        }
        else 
        {
            cont_count = 0;
        }
    }
    cout << emp_count << '\n';
}