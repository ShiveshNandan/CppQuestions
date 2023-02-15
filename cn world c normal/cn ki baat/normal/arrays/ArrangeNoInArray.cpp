#include <iostream>
using namespace std;

void Array(int a[], int n)
{
    int b = 1;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            a[i] = b;
            b++;
            a[n - i - 1] = b;
            b++;
        }
    }
    else
    {
        for (int i = 0; i < (n / 2)+1; i++)
        {
            if (a[i] != a[n - i - 1])
            {
                 a[i] = b;
                b++;
                a[n - i - 1] = b;
                b++;
            }
            else
            {
                a[n/2]=n;
            }
        }
    }
}
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    int a[100];
    cout << "Enter the Integer: ";
    cin>>n;
    Array(a, n);
    PrintArray(a, n);
    // cout << "\n integer"<<(n/2);
}