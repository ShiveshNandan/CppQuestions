#include <iostream>
#include<math.h>
using namespace std;

int main () {
    int n = 1;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n&1;
        cout<<bit<<" bit "<<endl;
        ans = (pow(10,i)*bit) + ans;
        cout<<ans<<endl;
        n = n>>1;
        i++;
    }
        cout<<ans<< " " <<endl;
    
}