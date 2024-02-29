#include <iostream>
using namespace std;


int main(){
    int arr[8] = {-12,-65,9,23,78,2,9,-6};
    int maxi = arr[0];
    int min = arr[0];
    
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
        }else if (arr[i] <= min){
            min = arr[i];
        }
    }
        cout<<"min: "<<min<<endl;
        cout<<"max: "<<maxi<<endl;
}