#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> A = {9,2,0,6,4};
    int ans = 0;
    for(int i =0; i < A.size() ; i++){
        for(int j = i; j< A.size(); j++){
            if (A[i]==0 || A[j] == 0)
            {
                continue;
            }else if(A[i]%A[j]>ans){
                ans = A[i]%A[j];
            }else if (A[j]%A[i]>ans){
                ans = A[j]%A[i];
            }
            cout<<"value of i :"<<i<<" value of j :"<<j<<endl;
        }
    }
    cout<<ans;
    // return ans;
}
