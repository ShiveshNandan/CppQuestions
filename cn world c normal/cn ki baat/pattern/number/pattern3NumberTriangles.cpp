#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    cout << "enter the number of rows" << endl;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=i ; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //  for (int i = 1; i <= n; i++)
    // {
    //     int a = i;
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout<<a;
    //         a++;
    //     }
    //     cout<<endl;
    // }

    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
}