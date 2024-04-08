#include <iostream>
using namespace std;

void print(int arr[], int length){

    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void leftMost(int arr[], int length,int k){

    int start = 0;
    int end = length - 1;
    int ans = -1;
    while (start <= end){

        int mid = start + (end - start)/2;

        if (arr[mid] == k)
        {
            end = mid -1;
            ans = mid;
        }else if(arr[mid] < k){
            start = mid +1;
        }else{
            end = mid - 1;
        }
        
    }
    cout << "leftmost : "<<ans<<endl;    
}
void RightMost(int arr[], int length,int k){

    int start = 0;
    int end = length - 1;
    int ans = -1;
    while (start <= end){

        int mid = start + (end - start)/2;

        if (arr[mid] == k)
        {
            start = mid + 1;
            ans = mid;
        }else if(arr[mid] < k){
            start = mid +1;
        }else{
            end = mid - 1;
        }
        
    }
    cout << "RightMost : "<<ans<<endl;    
}

int main() {
    // int arr[7] = {0,0,1,1,1,1,1};
    int arr[7] = {0,0,0,0,0,1,1};
    // print(arr,7);
    int key = 6;
    leftMost(arr,7,key);
    RightMost(arr,7,key);
}