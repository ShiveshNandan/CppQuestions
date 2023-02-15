#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    cout << "enter the number:" << endl;
    // cin >> n;
    char a = 'A';
    for (int i = 1; i <= n; i++)
    {
        char b = a + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << b;
            b++;
        }
        cout << endl;
    }


    // for (int i = 1; i <= n; i++)
    // {
    //     char b = a + i - 1;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << b;
    //         b++;
    //     }
    //     cout << endl;
    // }
}