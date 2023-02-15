#include <iostream>
using namespace std;

int isPrime (int n){
    // int ans = 1;
    for (int i = 2; i < n ; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main(){  
    cout<<isPrime(157)<<endl;  
}