#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num = {4,5,6,7,0,1,2};

    for (int i = 0; i < num.size(); i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;

    int start = 0;
    int end = num.size() - 1;
        int mid = start + (end-start)/2;

    while (start <= end)
    {
        cout<<num[start]<<" "<<num[mid]<<" "<<num[end]<<endl; 
        if (num[mid] >= num[start])
        {
            start = mid +1 ;
        }else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }

    cout<<num[start];    
}