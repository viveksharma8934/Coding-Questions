#include <iostream>
#include <string>

using namespace std;

int dp[10000][10000];

int lcs(string s1, string s2, int m, int n)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string s1 = "1111100";
    string s2 = "111";
    cout << lcs(s1, s2, s1.size(), s2.size());
}