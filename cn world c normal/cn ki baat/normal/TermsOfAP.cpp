#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the first X terms" << endl;
    cin>>x;  

    // my approach
    // for (int i = 1; i <= x; i++)
    // {
    //     int a = (3*i) + 2 ;
    //     if (a%4 == 0)
    //     {
    //         x++;
    //     }else{
    //         cout<<a<<" ";
    //     }    
    // }




    // cn approach
    int count = 1;
    for (int i = 1; i <= 100 && count <=x; i++)
    {
        int a = (3*i) + 2 ;
        if (a%4 != 0)
        {
            cout<<a<<" ";
            count = count +1;
        }  

    }

      
}
