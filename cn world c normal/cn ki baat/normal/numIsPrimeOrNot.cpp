#include <iostream>
using namespace std;


int main(){
    int n;
    cout<< "Enter the number"<<endl;
    cin>> n;
    int d = 0;
    for (int i = 2; i < n; i++)
    {
        // cout<<i<<endl;      
        if (n%i == 0 )
        {
            d = 1;
            break;
        }  
        // cout<<"d"<<d<<endl;      
    }
    if (d == 0)
        {
            cout<<"prime"<<endl;
        }else{
            cout<<"not a prime"<<endl;
        }
}