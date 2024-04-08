#include <iostream>
#include <vector>
using namespace std;


int binary(const vector<int> nums , int key) {
    int start = 0;
    int end = nums.size() - 1;
     while (start <= end)
     {
        int mid =start + (end-start)/2;
        if (nums[mid] == key)
        {
            // cout<<mid<<endl;
            return mid;
            // break;

        }else if (key < nums[mid])
        {
            end = mid -1;
            // cout<<"upr "<<end<<endl;
        }
        else if (key > nums[mid])
        {
            start = mid +1;
            // cout<<"down "<<start<<endl;
        } 
     }
    //  cout<<-1;
    return -1;
     
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ans = binary(nums,3);
    cout << ans;
}