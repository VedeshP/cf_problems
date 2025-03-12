#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>

using namespace std;

void solve()
{
    int a, b; cin >> a >> b;
    int xk, yk; cin >> xk >> yk;
    int xq, yq; cin >> xq >> yq;

    // unordered_set<pii> q;
    set<pii> q;
    // vector<pii> k;

    q.insert({xq + a, yq + b});
    q.insert({xq + a, yq - b});
    q.insert({xq - a, yq + b});
    q.insert({xq - a, yq - b});
    q.insert({xq + b, yq + a});
    q.insert({xq + b, yq - a});
    q.insert({xq - b, yq + a});
    q.insert({xq - b, yq - a});

    q.insert({xk + a, yk + b});
    q.insert({xk + a, yk - b});
    q.insert({xk - a, yk + b});
    q.insert({xk - a, yk - b});
    q.insert({xk + b, yk + a});
    q.insert({xk + b, yk - a});
    q.insert({xk - b, yk + a});
    q.insert({xk - b, yk - a});

    // unordered_set<pii> set(q.begin(), q.end());
    // int ans = 0;
    // for (const auto& ele : k)
    // {
    //     if (set.find(ele) != set.end()) ans++;
    // }
    // cout << ans << '\n';
    // for (const auto& ele : q)
    // {
    //     cout << ele.first << ' ' << ele.second << '\t';
    // }
    // cout << '\n';
    if (a != b) cout << 16 - q.size() << '\n';
    else cout << 8 - q.size() << '\n';
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