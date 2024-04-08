#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int key = 1;

    int start = 0;
    int end = arr.size()-1;

    while (start < end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid] >= arr[start])
        {
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    int pivot = start;
    cout<<endl<<pivot<<endl;






    start = 0;
    end = arr.size()-1;

    if (arr[end] >= key && arr[pivot] <= key)
    {
        cout<<"enter if"<<endl;
        start = pivot;
        while(start <= end){
            int mid = start + (end-start)/2;
            cout<<start<<" "<<mid<<" "<<end<<endl;
            if (arr[mid] == key)
            {
                cout<<"found at index : "<<mid<<endl;
                break;
            }else if (arr[mid] < key)
            {
                start = mid+1;
            }else {
                end = mid - 1;
            }
        }
    }else if (arr[start] <= key && arr[pivot-1] >= key)
    {
        cout<<"enter else-if"<<endl;
       end = pivot-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            cout<<mid<<endl;
            if (arr[mid] == key)
            {
                cout<<"found at index : "<<mid<<endl;
                break;
            }else if (arr[mid] < key)
            {
                start = mid+1;
            }else {
                end = mid - 1;
            }
        }
    }else
    {
        cout<<"key is not present in the array.";
    }   
        
}
