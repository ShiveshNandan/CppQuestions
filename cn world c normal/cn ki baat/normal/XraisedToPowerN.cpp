#include <iostream>
using namespace std;

int main(){
    int x,n;
    // int x = 2;
    // int n = 3;
    cout<<"enter the number (x)"<<endl;
    cin>>x;
    cout<<"enter to raised to power (n)"<<endl;
    cin>>n;
    int a =1;
    for (int i = 1; i <= n; i++)
    {
        a = a*x;
    }
        cout<<a<<endl;
}