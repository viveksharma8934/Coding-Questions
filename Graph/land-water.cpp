#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void dfs(int i, int j, int a[4][5])
{
    if (i < 0 || j < 0 || i == 4 || j == 5)
        return;
    if (a[i][j] == 0)
        return;
    a[i][j] = 0;
    dfs(i - 1, j, a);
    dfs(i, j - 1, a);
    dfs(i + 1, j, a);
    dfs(i, j + 1, a);
}

int main()
{
    int ans;
    int a[4][5] = {{1, 1, 0, 1, 0}, {0, 1, 0, 0, 1}, {1, 0, 1, 1, 0}, {0, 1, 1, 1, 0}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                ans++;
                dfs(i, j, a);
            }
        }
    }
    cout << ans;
}