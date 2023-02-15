#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number:" << endl;
    cin >> n;


    // 1111,2222,3333,.....


    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<i; 
    //     }
    //     cout<<endl;
    // }


    // 1234,1234,1234,.....


    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<j; 
    //     }
    //     cout<<endl;
    // }



    // 4321,4321,4321,.....

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            cout<<j; 
        }
        cout<<endl;
    }
}