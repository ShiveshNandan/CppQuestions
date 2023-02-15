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

void MergeArr(int a[], int b[], int c[], int n, int m)
{
        int d, g, x, min;
        d = 0;
        g = 0;
        x = 0;
        int count=0;
        
    for (int i = 0; i < n+m; i++)
    {

        if (d == n && a[d] < b[g] )
        {
           c[x]=a[d];
           for (int k = count; k < m+n; k++)
           {
            c[x]=b[g];
            g++;
            x++;
        //    cout<<" hello1 ";

           }
           
        //    cout<<" 1 "<<endl;
           count++;
        }
        else if (g == m && a[d] < b[g] )
        {
           c[x]=b[g];
           for (int k = count; k < m+n; k++)
           {
            c[x]=a[d];
            x++;
            d++;
        //    cout<<" hello2 ";
           }
        //    cout<<" 2 "<<endl;
           count++;
        }
        else if (a[d] >= b[g])
        {
            c[x] = b[g];
            // cout << c[x] << endl;
            g++;
            x++;
            // cout<<" 3 "<<endl;
            count++;
        }
        else if (a[d] < b[g])
        {
            c[x] = a[d];
            // cout<< c[x] << endl;
            d++;
            x++;
            // cout<<" 4 "<<endl;
            count++;
        }
    }
    // print(a,n);

    print(c,n+m);
}

int main()
{
    int n = 6;
    int m = 8;
    int a[100];
    int b[100];
    // int a[] = {1, 12, 36, 45, 356, 553};
    // int b[] = {12, 45, 56, 123, 245, 356, 789, 876};
    int c[100];
    // int x = 221;
    // int b;
    cout << "Enter the length of 1st Array : ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrInput(a, n);
    cout << "Enter the length of 2nd Array : ";
    cin >> m;
    cout << "Enter the Array: ";
    ArrInput(b, m);
    // print(a, n);
    // cout << "\nEnter the Integer: ";
    // cin >> x;
    cout << "Sorted merged array is :" << endl;
    // print(a,n);
    cout << endl;
    MergeArr(a, b, c, n, m);
}