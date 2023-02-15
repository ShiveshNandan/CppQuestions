#include <iostream>
using namespace std;

void ArrLength(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void Sort(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
    {
          cout<<"hi";      
    }else if(a[n-i]!=1){
               
    }
    }
    
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i];
    // }
    
}

int main()
{
    int n = 7;
    // int a[100];
    int a[100] = {1, 0, 0, 1, 1, 0, 1};
    // int x;
    // cout << "Enter the Integer: ";
    // cin >> x;
    // cout << "Enter the length of Array: ";
    // cin >> n;
    // cout << "Enter the Array: ";
    // ArrLength(a, n);
    Sort(a,n);
}