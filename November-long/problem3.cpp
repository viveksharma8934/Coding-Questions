#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 != 0)
            {
                odd++;
            }
        }
        if (odd % 2 != 0)
        {
            odd = odd - 1;
        }
        cout << odd / 2 << endl;
    }
}