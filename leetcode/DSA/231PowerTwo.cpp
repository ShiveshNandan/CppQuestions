#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n =2;
    int power = 1;
    int i = 0;
    while (n >= power)
    {
        power = pow(2,i);
        cout<<power<<endl;
        if (n == power)
        {
            cout<<"true";
        }
        i++;
    }
    cout<<"false";
}