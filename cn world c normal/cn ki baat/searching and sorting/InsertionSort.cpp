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

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int v = a[i];
            if (a[i] < a[j])
            {
                for (int k = 0; k < i-j; k++)
                {
                    a[i-k]=a[i-k-1];
                }
                a[j]=v;
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
    cout<<"Sorted array is :"<<endl;
    insertionSort(a, n);
}