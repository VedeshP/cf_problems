#include <iostream>
#include <limits.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int absmin = INT_MAX;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        absmin = min(abs(absmin), abs(a));
    }
    cout << absmin << '\n';
    return 0;
}