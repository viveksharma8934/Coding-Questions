#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        int x1 = x + (k * a);
        int y1 = y + (k * b);

        if (x1 > y1)
        {
            cout << "DIESEL" << endl;
        }
        else if (x1 == y1)
        {
            cout << "SAME PRICE" << endl;
        }
        else
        {
            cout << "PETROL" << endl;
        }
    }
}