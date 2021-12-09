#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int m[20][20];

void insert(int i, int j)
{
    m[i][j] = 1;
    m[j][i] = 1;
}

void dfs(int i, vector<int> &cont)
{
    if (cont[i] == 1)
        return;
    cont[i] = 1;
    cout << i << " ";
    for (int j = 0; j < 20; j++)
    {
        if (m[i][j] == 1)
        {
            dfs(j, cont);
        }
    }
}

int main()
{
    memset(m, 0, sizeof m);
    insert(2, 3);
    insert(2, 19);
    insert(9, 10);
    insert(7, 11);
    vector<int> cont(20, 0);
    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << " ";
        dfs(i, cont);
        cout << endl;
    }
}