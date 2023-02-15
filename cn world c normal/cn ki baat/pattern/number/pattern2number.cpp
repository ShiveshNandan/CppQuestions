#include <iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    k=0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           k=k+1; 
           cout<<k;
        }
        cout<<endl;
        
    }
    
}