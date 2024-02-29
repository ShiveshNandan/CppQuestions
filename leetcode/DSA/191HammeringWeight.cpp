#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n = 999;
    while(n !=0 ){
        if(n&1){
            count++ ;
        }
        cout<<n<<endl;
        n = n>>1;
        cout<<n<<endl;
    }
    // cout<< n;
    cout << count<<endl;
    
}