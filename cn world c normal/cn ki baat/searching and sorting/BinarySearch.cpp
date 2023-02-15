#include <iostream>
using namespace std;

void ArrLength(int a[], int n)
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
        cout<< a[i]<< " ";
    }
}
void BinarySearch(int a[], int n, int x)
{
    int half;
    int l = 0;
    int h = n;
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        // cout<<" "<<h-l<<" ";
        if (h >= l)
        {
        half = (l + h) / 2;
        if (a[half] == x)
        {
            cout << half;
            // cout << a[half];
            break;
        }
        else if (a[half] > x)
        {
            h = half - 1;
            // cout << t <<" greater ";
            // cout << a[half];

            t++;
        }
        else if (a[half] < x)
        {
            l = half + 1;
            // cout << t <<" smaller ";
            // cout << a[half];            
            t++;
        }}
        else
        {
            cout << -1;
            break;
        }
    }
}

int main()
{
    int n = 7;
    // int a[7];
    int a[100];
    int x = 221;
    int b;
    cout << "Enter the length of Array: ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrLength(a, n);
    cout << "\n enter the number of test case : ";
    cin >> b;
    print(a,n);
    for (int i = 0; i < b; i++)
    {
        cout << "\nEnter the Integer: ";
        cin >> x;
        BinarySearch(a, n, x);
    }
}