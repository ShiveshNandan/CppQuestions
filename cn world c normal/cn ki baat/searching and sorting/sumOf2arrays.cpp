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

void Sum4(int a[],int b[], int n, int m)
{
    int multi1 = 1;
    int sum1=0;
    int sum2=0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + a[n-i-1]*multi1;
        multi1 = multi1*10;
    }
    cout << sum1<<endl;
    int multi2 = 1;
    for (int i = 0; i < m; i++)
    {
        sum2 = sum2 + b[m-i-1]*multi2;
        multi2 = multi2*10;
    }
    cout << sum2<<endl;
    cout << sum1 + sum2<<endl;
    
}

int main()
{
    int n = 4;
    int m = 3;
    int a[100];
    int b[100];
    // int a[] = {9,7,6,1};
    // int b[] = {4,5,9};
    // int x = 221;
    // int b;
    cout << "Enter the length of 1st Array: ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrInput(a, n);
    cout << "Enter the length of 2nd Array: ";
    cin >> m;
    cout << "Enter the Array: ";
    ArrInput(b, m);
    // print(a, n);
    // cout << "\nEnter the Integer: ";
    // cin >> x;
    Sum4(a,b, n,m);
}