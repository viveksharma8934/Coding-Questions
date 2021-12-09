#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, r;
        cin >> n >> k;
        if (n == 0 || k > n)
        {
            cout << '0' << endl;
        }
        else if ((n - k) < k)
        {
            cout << "-1" << endl;
        }
        else
        {
            r = n / k;
            if (n % k == 0 || (n % k < k && n % k > 0))
            {
                cout << r << endl;
            }
            else
            {
                cout << r - 1 << endl;
            }
        }
    }
}