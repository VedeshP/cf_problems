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
    int x, y;
    cin >> x >> y;
    if(y-x==1)cout<<"YES";
    else if(y>=x)cout<<"NO";
    else{
        if(((x-y+1)%9) == 0)cout<<"YES";
        else cout<<"NO";
    }
    cout<<'\n';
}