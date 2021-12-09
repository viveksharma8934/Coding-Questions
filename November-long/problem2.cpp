#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            if (y % 2 == 0 || x >= 2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}