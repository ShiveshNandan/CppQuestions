#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {0,2,3,5,3,2,0};
    if (arr.size() <= 3)
    {
        cout<<"false"<<endl;
    }
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    
    while (start <= end )
    {
        int mid = start + (end - start)/2;
        if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
        {
            ans = mid;
            // cout<<"1"<<endl;
            break;
        }else if (arr[mid] < arr[mid+1])
        {
            start = mid + 1; 
            // cout<<"2"<<endl;
        }else{
            end = mid - 1;
            // cout<<"3"<<endl;
        }
        
    }
    cout<<ans;
    
}