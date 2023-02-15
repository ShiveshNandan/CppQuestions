#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the Number" << endl;
    // x = 976543;
    cin >> x;
    int num = x;
    int a;

    // i did't reverse a number...i just revese the order of the digits
    // i did't reverse it

    // for (int i = 1; i <= 8; i++)
    // {
    //     if (num % 10 == 0)
    //     {
    //         num = num / 10;
    //     }
    //     else
    //     {
    //         for (int i = 1; i <= 8; i++)
    //         {
    //             a = num % 10;
    //         num = num / 10;

    //         cout << a;
    //         if (num == 0)
    //         {
    //             break;
    //         }
    //         }
    //         break;
    //     }
    // }

    // cn approach (best)
    int rev_num = 0;
    int t = 1;
    for (int i = 1; i <= t; i++)
    {
        a = num % 10;
        num = num / 10;
        int rev = a;
        rev_num = rev + rev_num * 10;
        t++;
        if (num == 0)
        {
            cout << rev_num << endl;
            break;
        }
    }
}
