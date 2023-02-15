#include <iostream>
using namespace std;
int main()
{
    int n, k, a, i;
    cin >> n;
    cout << "value of k\n";
    cin >> k;
    cout << "values of array\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (k == i)
        {
            for (int i = 0; i < k; i++)
            {
                cout << arr[k - i - 1] << " ";

            }
           for (int i = n; i > k; i--)
            {
                k++;
                cout << arr[k] << " ";
            }
        }
    }
}
