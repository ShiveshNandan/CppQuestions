#include <iostream>
using namespace std;

void ArrLength(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void Sum(int a[], int n,int x){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                 if (a[i]+a[j]+a[k]== x)
            {
                // cout<<i+1<<" "<<j+1<<" "<<k+1<<" \n";
                count++;
            }
            }                                 
        }
        
    }
    cout<<count;
}

int main()
{
    int n = 9;
    int a[100];
    // int a[100] = {1, 3, 6, 2, 5, 4, 3, 2, 4};
    int x;
    cout << "Enter the Integer: ";
    cin >> x;
    cout << "Enter the length of Array: ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrLength(a, n);
    Sum(a, n, x);
}