#include <iostream>
using namespace std;

void ArrLength(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int Unique(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ans = a[i];
        int check = 0;
        if (i == n - 1)
        {
            check = 0;
        }

        else
        {
            for (int j = 0; j < n; j++)
            {
                check = 0;
                if (i == j)
                {
                    check = 1;
                    continue;
                }
                else if (a[i] == a[j])
                {
                    check = 1;
                    break;
                }
            }
        }

        if (check == 0)
        {
            cout << " ans " << ans;
            break;
        }
    }
}

int main()
{
    int n;
    int a[100];
    // int a[100] = {1, 3, 1, 5, 2, 3, 5};
    cout << "Enter the Integer: ";
    cin >> n;
    ArrLength(a, n);
    // PrintArray(a, n);
    Unique(a, n);
}