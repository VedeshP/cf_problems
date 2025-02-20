#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> vt[i];
    }
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += vt[i];
    }
    sum *= -1;
    cout << sum  << '\n';
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