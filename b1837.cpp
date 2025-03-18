#define ll long long
#define pii pair<int,int>
#define vi vector<int>

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve()
{
    int n = 0; cin >> n;
    string s; cin >> s;
    int longest = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && s[j] == s[i]) j++;
        longest = max(longest, j - i);
        i = j - 1; 
        // note that i++ is done in the for loop statemetn 
    }
    cout << longest + 1 << '\n';
    // int diff = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (s[i] != s[i + 1]) diff++;
    // }
    // if (n % 2 != 0) cout << n - diff + 1 << '\n';
    // else 
    // {
    //     if (diff % 2 != 0) cout << n - diff + 1 << '\n';
    //     else cout << n - diff << '\n';
    // }
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