#include <iostream>
#include <algorithm>
#include <queue>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<ll> jack;
        priority_queue<ll, vector<ll>, greater<ll>> john;
        ll n, m, john_sum = 0, jack_sum = 0;
        cin >> n >> m;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            john_sum += temp;
            john.push(temp);
        }
        for (ll i = 0; i < m; i++)
        {
            ll temp1;
            cin >> temp1;
            jack_sum += temp1;
            jack.push(temp1);
        }
        int count = 0;
        while (john_sum <= jack_sum)
        {
            int john_ele = john.top();
            int jack_ele = jack.top();
            if (john_ele >= jack_ele)
            {
                break;
            }
            count++;
            john_sum -= john_ele;
            john_sum += jack_ele;
            jack_sum -= jack_ele;
            jack_sum += john_ele;
            john.pop();
            jack.pop();
            john.push(jack_ele);
            jack.push(john_ele);
        }
        if (jack_sum >= john_sum)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}