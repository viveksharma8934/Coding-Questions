#include <iostream>
#include <String>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3], b[2];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 2; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (toupper(b[i]) == toupper(a[i]))
            {
                cout << b[i] << endl;
                break;
            }
            if (toupper(b[i + 1]) == toupper(a[i]))
            {
                cout << b[i + 1] << endl;
                break;
            }
        }
    }
}