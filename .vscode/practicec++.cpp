#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int j = 0;
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            cout << a[i][0] << endl;
        }
        else
        {
            int temp_i = i, temp_j = j;
            cout << a[temp_i][temp_j] << " ";
            while (true)
            {
                temp_j += 1;
                temp_i -= 1;
                cout << a[temp_i][temp_j] << " ";
                if (temp_j == i && temp_i == j)
                {
                    cout << endl;
                    break;
                }
            }
        }
    }
    // j = 0;
    for (j = 1; j < 3; j++)
    {
        if (j == i - 1)
        {
            cout << a[i - 1][j] << endl;
        }
        else
        {
            int temp_i = i - 1, temp_j = j;
            cout << a[temp_i][temp_j] << " ";
            while (true)
            {
                temp_j += 1;
                temp_i -= 1;
                cout << a[temp_i][temp_j] << " ";
                if (temp_j == i - 1 && temp_i == j)
                {
                    cout << endl;
                    break;
                }
            }
        }
    }
}