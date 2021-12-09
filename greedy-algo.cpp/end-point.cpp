#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

bool cmp(vector<int> &ele1, vector<int> &ele2)
{
    return ele1[1] <= ele2[1];
}

int main()
{
    vector<vector<int>> activities = {{4, 6}, {5, 8}, {7, 10}, {13, 15}, {4, 10}};
    sort(activities.begin(), activities.end(), cmp);

    // for (int i = 0; i < activities.size(); i++)
    // {
    //     cout << activities[i][0] << " " << activities[i][1] << endl;
    // }
    int count = 0, free = 0;
    for (int i = 0; i < activities.size(); i++)
    {
        if (free <= activities[i][0])
        {
            count++;
            free = activities[i][1];
        }
    }
    cout << count;
}