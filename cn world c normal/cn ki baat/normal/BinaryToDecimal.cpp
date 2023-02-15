#include <iostream>
using namespace std;

int main()
{
    // int a = 111;
    int a;
    cout << "enter the binary number" << endl;
    cin >> a;
    int n = a;
    int t = 1;
    int nnum = 0;
    int p = 1;

    // cn ki baat (best)
    for (int i = 1; i <= t; i++)
    {
        int r = n % 10;
        n = n / 10;
        nnum = nnum + r * p;
        p = p * 2;
        if (n == 0)
        {
            cout << nnum << endl;
            break;
        }
        t++;
    }

    // my approach...shi h but time complexity zyada h On^2 h
    // for (int i = 1; i <= t; i++)
    // {
    // int b = 1;
    //     int r = n % 10;
    //     n = n / 10;
    //     if (r == 0)
    //     {
    //         b = 0;
    //     }
    //     else if (r == 1)
    //     {
    //         for (int k = 1; k < i; k++)
    //         {
    //             b = b * 2;
    //         }
    //     }
    //     nnum = nnum + b;
    //     if (n == 0)
    //     {
    //         cout<<nnum<<endl;
    //         break;
    //     }
    //     t++;
    // }
}