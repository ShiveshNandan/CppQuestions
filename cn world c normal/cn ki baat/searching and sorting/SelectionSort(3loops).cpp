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
    cout<<"\n";
}
void swarp(int a,int b){
    cout<< "first "<<a<<" "<<b<<"\n";
    int x = a;
    a = b;
    b = x;
    cout<< "second "<<a<<" "<<b<<"\n";
    // cout << " swaped ";
}
void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        int temp = a[i];
        // int x = a[i];
        for (int j = i; j < n; j++)
        {
            if (temp>a[j])
            {
                temp = a[j];             
                int x = a[i];
                a[i]=a[j];
                a[j]=x;
                // a[j] = temp;     
            }   
        }
    }
    print(a,n);   
}

int main()
{
    int n = 7;
    int a[100];
    // int a[]={12,45,356,543,56,456,54};
    // int x = 221;
    // int b;
    cout << "Enter the length of Array: ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrInput(a, n);
    // print(a, n);
    // cout << "\nEnter the Integer: ";
    // cin >> x;
    SelectionSort(a, n);
}