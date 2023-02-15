#include <iostream>
using namespace std;

void ArrInput(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void bubbleSort(int a[], int n)
{
    int t=0;
    int count=0;
    for (int i = 0; i < t+1; i++)
    {
        if (count == n)
        {
            cout<<0<<endl;
        }
        
        else if (a[i]>a[i+1])
        {
            cout<<i+1;            
        }else{
            t++;
            count++;
        }  
    } 
}

int main()
{
    int n = 6;
    int m = 8;
    int a[100];
    // int b[100];
    // int a[] = {5,6,1,2,3,4};
    // int b[] = {12, 45, 56, 123, 245, 356, 789, 876};
    // int c[100];
    // int x = 5;
    // int b;
    cout << "Enter the length of Array : ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrInput(a, n);
    // print(a, n);
    // cout << "\nEnter the Integer: ";
    // cin >> x;
    cout << "Sorted array is :" << endl;
    // print(a,n);
    cout << endl;
    bubbleSort(a, n);
}