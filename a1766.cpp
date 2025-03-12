#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

// void solve()
// {

// }

int isround(int n)
{
    ll dig = 0;
    ll zero = 0;
    while (n)
    {
        if (n % 10 == 0) zero++;
        dig++;
        n /= 10;
    }
    return zero == dig - 1;
}

int main(void)
{
    vector<ll> round;
    for (ll i = 1; i < 999999; i++)
    {
        if (isround(i)) round.push_back(i);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        // solve();
        // solving here 
        ll n; cin >> n;
        int count = 0;
        for (int i = 0; i , round.size(); i++)
        {
            if (round[i] <= n) count++;
            else break;
        }
        cout << count << '\n';
    }
}