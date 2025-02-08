// #include <bits/stdc++.h>
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
    int n, k;
    cin >> n >> k;
    vector<long long>vt(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    int unsort_count = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (vt[j] > vt[j+1])
        {
            unsort_count++;
        }
    }
    if (k == 1 && unsort_count == k)
    {
        cout << "NO" << '\n';
        return;
    }
    if (unsort_count == 0)
    {
        cout << "YES" << '\n';
        return;
    }
    for (int x = 2; x <= k; x++)
    {
        if ((unsort_count) % x == 0 || (unsort_count + 1) % x == 0)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
    return;
}