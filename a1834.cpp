#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve()
{
    int n, x; cin >> n;
    int neg = 0, pos = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        if (x < 0) neg++;
        else pos++;
    }
    // i know i can solve it in O(1) but currently i am not able to
    // i will do it for sure
    int ans = 0;
    while (pos < neg || neg % 2 != 0)
    {
        ans++;
        pos++;
        neg--;
    }
    cout << ans << '\n';
    // next goal: do it in O(1)
}

int main(void)
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        // cout << i << '\t';
        solve();
    }
}