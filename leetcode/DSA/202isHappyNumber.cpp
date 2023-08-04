#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

bool isHappy(int n) {
        int m = 1;
    int ans = 0;
    int b = n;
    for (int i = 0; i < m; i++)
    {

        b = n / (pow(10, i));
        int a = b % (10);
        ans = ans + a * a;
        m++;
        if (b == 0)
        {
            i = m + 2;
        }
    }
    if (ans == 1)
    {
        cout << "true" << endl;
    }
    else if (ans >= 6)
    {
        isHappy(ans);
    }
    else if (ans < 6){
    cout << "false" << endl;
    }
    }

int main()
{
    isHappy(10000);
}