#include <iostream>
using namespace std;

int main (){
    int num = 234;
    int sum = 0;
    int mul = 1;
    for (int i = num; i > 0 ; i = i/10)
    {
        cout<< i%10 <<endl; 
        sum = sum + (i%10);       
        mul = mul * (i%10);       
    }
    cout << mul << " " << sum;
    
}