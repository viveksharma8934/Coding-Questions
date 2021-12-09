#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag = true;
        map<int, int> final;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            final[temp]++;
        }

        auto j = final.rbegin();
        if (j->second == 2)
        {
            cout << "-1" << endl;
            flag = false;
        }
        else
        {
            for (auto x : final)
            {
                if (x.second > 2)
                {
                    cout << "-1" << endl;
                    flag = false;
                    break;
                }
            }
        }

        if (flag == true)
        {
            for (auto x : final)
            {
                if (x.second == 2)
                {
                    cout << x.first << " ";
                }
            }
            for (auto k = final.rbegin(); k != final.rend(); k++)
            {
                cout << k->first << " ";
            }
            cout << endl;
        }
    }
}