#include<iostream>
using namespace std;

void Array(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }  
}

int find(int a[],int n,int f){
    for (int i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            return i;
        } 
    } 
    return -1; 
}


int main(){
    int n,loop,f;
    int a[100];

    cout<<"Enter the no. of test cases: ";
    cin>>loop;
    for (int j = 0; j < loop; j++)
    {
    cout<<"Enter the length of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    Array(a,n);
    cout<<"Enter the element you want to find: ";
    cin>>f;
    cout<<find(a,n,f)<<endl;
    }
    
}