#include <iostream>
#include<math.h>
#include<vector>
using namespace std;


// my first approach

// int main () {
//     int n = 7;
//     long long i = 0;
//     vector<int> bits;
//     if(n == 0){
//         return 1;
//     }
//     while (n != 0)
//     {
//         int bit = n&1;
//         if(bit == 1){
//             bits.push_back(0);
//         }else{
//             bits.push_back(1);
//         }
//         n = n>>1;
//         i++;
//     }

//     for (int i = 0; i < bits.size(); i++)
//     {
//         cout<<bits[bits.size() - i -1]<<" ";
//     }
    



//     long long n2 = 0;
//     long long ans2 = 0;
//     int j;
//     for(j = 0; j < bits.size(); j++ ){
//         int bit = bits[j];
//         ans2 = (bit*pow(2,j)) + ans2;
//     }
//         cout<<endl<<ans2;
//         return ans2;
    
    
    
// }




// best approach

int main() {
    int n = 9;
    int mask = 0;
    int m = ~n;
    if (n == 0)
    {
        return 1;
    }
    
    while (n != 0)
    {
        mask = mask<<1;
        mask = mask | 1;
        n = n>>1;
    }
    cout<<mask;
    cout<<endl;
    int ans = m & mask;
    cout<<ans;
    
}