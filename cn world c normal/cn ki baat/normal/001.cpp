#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number"<<endl;
    cin>> n;
    int k = 0;
    // for (int i = 2; i <= n; i= i+2)
    // {
    //     cout<<i<<endl;
    //     k = k+i ;
    // }
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            // cout<<i<<endl;
            k = k+i;
        }
    }
    cout<<k;
}