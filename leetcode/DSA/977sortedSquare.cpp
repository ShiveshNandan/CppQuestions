#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums;

    nums={-1,-3,0,4,10};
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i]*nums[i];
    };

    bool swapped;
     for (int i = 0; i < nums.size() - 1; i++) {
        swapped = false;
        for (int j = 0; j < nums.size() - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
}