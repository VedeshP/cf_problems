#define ll long long
#define pii pair<int,int>

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    vector<vector<char>> a(10, vector<char>(10));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> a[i][j];
        }
    }
    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i][j] == 'X')
            {
                if (j == 0 || i == 0 || j == 9 || i == 9)
                {
                    score += 1;
                }
                if (((j == 1 || j == 8) && (i <= 8 && i >=1)) || ((i == 1 || i == 8) && (j <=8 && j >= 1)))
                {
                    score += 2;
                }
                if (((j == 2 || j == 7) && (i <= 7 && i >= 2)) || ((i == 2 || i == 7) && (j <=7 && j >= 2)))
                {
                    score += 3;
                }
                if (((j == 3 || j == 6) && (i <= 6 && i >= 3)) || ((i == 3 || i == 6) && (j <=6 && j >= 3)))
                {
                    score += 4;
                }
                if (((j == 4 || j == 5) && (i <= 5 && i >= 4)) || ((i == 4 || i == 5) && (j <=5 && j >= 4)))
                {
                    score += 5;
                }
            }
        }
    }
    cout << score << '\n';
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