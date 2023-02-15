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

void Push(int a[],int n)
{
    int x =0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            int c = a[i];
            a[i]=a[x];
            a[x] = c;
            x++;
        }
    }
      print(a,n);  
    
}

int main()
{
    int n = 6;
    int m = 8;
    int a[100];
    // int b[100];
    // int a[] = {1, 0, 36, 0, 0, 553};
    // int b[] = {12, 45, 56, 123, 245, 356, 789, 876};
    // int c[100];
    // int x = 221;
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
    Push(a,n);
}