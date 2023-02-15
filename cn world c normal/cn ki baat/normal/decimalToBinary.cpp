#include <iostream>
using namespace std;

int main()
{
    // int a = 13;
    int a;
    cout << "enter the binary number" << endl;
    cin >> a;
    int n = a;
    int t = 1;
    int nnum = 0;
    int p = 1;
  
    for (int i = 1; i <= t; i++)
    {
        int r = a%2;
        a = a/2;
        int c = r*p; 
        nnum = c +nnum;
        if (a == 0)
        {
        cout<<nnum<<endl;
            break;
        }
        t++;        
        p = p*10;
        
    }
}