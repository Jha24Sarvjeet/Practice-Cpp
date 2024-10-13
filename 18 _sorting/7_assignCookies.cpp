#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*Assume you are an awesome parent and want to give your children some cookies.
 But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a
 cookie that the child will be content with; and each cookie j has a size s[j].
  If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content.
   Your goal is to maximize the number of your content children and output the maximum number.*/

int assignCookies(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < g.size() && j < s.size())
    {
        if (s[j] >= g[i])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};
    int ans = assignCookies(g, s);
    cout << ans << endl;
}