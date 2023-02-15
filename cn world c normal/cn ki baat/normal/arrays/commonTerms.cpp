#include <iostream>
using namespace std;

void ArrLength(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void Common(int a[], int b[], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout<<" "<<a[i]<<" "<<b[j]<<endl;
            if (a[i] == b[j])
            {
                cout << b[j];
                b[j]=-90;
                break;
            }

        }
    }
}

int main()
{
    int n = 5;
    int l, s;
    int m = 7;
    int a[100];
    int b[100];
    // int a[100] = {1, 3, 1, 5, 2, 3, 5};
    cout << "Enter the Integer: ";
    cin >> n;
    cout << "Enter the Array: ";
    ArrLength(a, n);
    cout << "Enter the Integer: ";
    cin >> m;
    cout << "Enter the Array: ";
    ArrLength(b, m);
    // PrintArray(a, n);
    // if (m >= n)
    // {
    //     l = m;

    //     s = n;
    // }
    // else
    // {
    //     l = n;
    //     s = m;
    // }
    // cout << l << " " << s;
    Common(a, b, n, m);
}