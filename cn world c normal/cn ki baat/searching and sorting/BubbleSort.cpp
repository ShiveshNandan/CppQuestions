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
    int a[100];
    // int a[] = {12, 45, 356, 543, 56, 456, 54};
    // int x = 221;
    // int b;
    cout << "Enter the length of Array: ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrInput(a, n);
    print(a, n);
    // cout << "\nEnter the Integer: ";
    // cin >> x;
    bubbleSort(a, n);
}