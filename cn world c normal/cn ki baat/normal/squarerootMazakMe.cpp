#include <iostream>
using namespace std;

int main()
{
    // int a = 67;
    int a;
    cout << "enter the binary number" << endl;
    cin >> a;
    int t = 1;
    for (int i = 0; i <= t; i++)
    {
        if (i*i>a)
        {
            cout<<i-1<<endl;
            break;
        }
        t++;
    }
    
}