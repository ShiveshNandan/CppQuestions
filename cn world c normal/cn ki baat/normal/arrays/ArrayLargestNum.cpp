#include<iostream>
using namespace std;

int InputArray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    return true;
}
int LargestArray(int a[],int n){
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int SumArray(int a[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
        return sum;    
}
int main(){
    int a[100];
    int n;
    cin>>n;
    cout<<InputArray(a,n)<<endl;
    // cout<<SumArray(a,n)<<endl;
    cout<<LargestArray(a,n)<<endl;
    

}