#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number" << endl;
    cin>> n;
    for (int k = 2; k <= n; k++)
    {
    int d = 0;
        for (int i = 2; i < k; i++)
        {
            // cout<<i<<endl;
            if (k % i == 0)
            {
                d = 1;
                break;
            }
            // cout<<"d"<<d<<endl;
        }
        if (d == 1)
        {
            // cout << "not a prime" << endl;
        }
        else
        {
            cout << "prime " << k << endl;
        }
    }
}