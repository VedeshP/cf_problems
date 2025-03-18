#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#include <iostream>
#include <vector>
#include <unordered_map>

#include <algorithm>

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    vi vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    sort(vt.begin(), vt.end());
    vi compat(n, 0);
    for (int i = 0; i < n;)
    {
        if (i < n -1 && vt[i + 1] - vt[i] <= k)
        {
            int j = i;
            while (j < n -1 && vt[j + 1] - vt[j] <=k)
            {
                if (vt[j + 1] - vt[j] <= k) compat[i]++;
                else break;
                j++;
            }
            i = j;
        }
        else
        {
            compat[i] = 0;
            i++;
        }
    }
    // int max_ele = *std::max_element(compat.begin(), compat.end());
    int max_ele = *max_element(compat.begin(), compat.end());
    // the above is because it returns iterator - so i need to dereference it using unary * op
    // cout << vt.size() - max_ele << '\n';
    cout << n - max_ele - 1 << '\n';
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