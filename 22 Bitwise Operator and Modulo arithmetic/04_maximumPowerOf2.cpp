#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*Maximum Power of 2 less than or equal to given number*/
// we can say using somewhat (Brian Kernighan's Algorithm)
int maxPowerOf2(int n)
{
    int temp = 0;
    while (n>0)
    {
        if ((n & (n - 1)) != 0)
        {
            n = n & (n - 1);
        }
        else
        {
            temp = n;
            break;
        }
    }
    return temp;
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    int highestPowerOF2 = maxPowerOf2(n);
    cout << highestPowerOF2 << endl;
}