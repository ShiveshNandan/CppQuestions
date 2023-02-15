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
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                int x = a[i];
                a[i] = a[i + 1];
                a[i + 1] = x;
            }
        }
    }
    print(a, n);
}

int main()
{
    int n = 7;
    int m = 8;
    // int a[100];
    // int b[100];
    int a[] = {0,0,2,1,1,2,0};
    // int b[] = {12, 45, 56, 123, 245, 356, 789, 876};
    // int c[100];
    // int x = 5;
    // int b;
    // cout << "Enter the length of Array : ";
    // cin >> n;
    // cout << "Enter the Array: ";
    // ArrInput(a, n);
    // print(a, n);
    // cout << "\nEnter the Integer: ";
    // cin >> x;
    cout << "Sorted array is :" << endl;
    // print(a,n);
    cout << endl;
    bubbleSort(a, n);
}