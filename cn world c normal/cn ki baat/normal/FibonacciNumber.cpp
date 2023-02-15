#include <iostream>
using namespace std;


int main(){
    int n;
    cout<< "Enter the number"<<endl;
    cin>> n;
    int ans = 0;
    int n0 = 0;
    int n1 = 1;
    int n2 = 1;
    if (n==0)
    {
      ans = n0; 
    }
    else if (n==1)
    {
      ans = n1; 
    }
    else if (n==2)
    {
      ans = n2; 
    }
    else{

    for (int i = 3; i <= n; i++)
    {
       ans = n1 + n2;
       n1 = n2; 
       n2 = ans;
       cout<<ans<<" ";
    }
    }
       cout<<endl<<ans<<endl;
    
}