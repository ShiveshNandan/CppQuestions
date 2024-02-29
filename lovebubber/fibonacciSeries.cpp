#include <iostream>
using namespace std;

int main(){

    int n = 1;
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++)
    {
        cout << a <<" ";
            int sum = a + b;
            a = b;
            b = sum;     
    }
    
}