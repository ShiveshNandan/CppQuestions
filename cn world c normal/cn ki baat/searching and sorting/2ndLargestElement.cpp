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
    for (int i = 0; i < n - 1; i++)
    {

        for (int k = 0; k < n - i - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                int m = a[k];
                a[k] = a[k + 1];
                a[k + 1] = m;
            }
        }
        // cout<<"ok"<<endl;
    }
    int t = 0;
    int count = 0;
    for (int h = 0; h < t+1; h++)
    {
        // cout << "hi" << endl;
        if (count == n)
        {
            cout<<-21<<endl;
        }else if (a[n - h-1] > a[n - 2 - h])
        {
            cout << a[n - h - 2]<<endl;
        }else
        {
            t++;
            count++;
        }
    }
    print(a, n);
}

int main()
{
    int n = 6;
    int m = 8;
    int a[100];
    // int b[100];
    // int a[] = {6, 5, 9, 0, 7, 1};
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