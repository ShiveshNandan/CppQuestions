#include <iostream>
using namespace std;

float FtoC (float n){
   float s = (5.0/9.0) * (n -32);
   return s;
}
int main(){  
    int n;
    cin>>n;
    cout<<FtoC(n)<<endl;  
}