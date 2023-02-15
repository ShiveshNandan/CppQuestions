#include<iostream>
using namespace std;

int fib(int n){
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}

int main(){
    int n = 1442;
    int t=1;
    for (int i = 1; i <= t; i++)
    {
        if (fib(i) == n)
        {
            cout<<"true"<<endl;
            break;
        }else if (fib(i)>= n)
        {
            cout<<"false"<<endl;
            break;   
        }    
        t++;    
    }    
}