#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << "enter the number:" << endl;
    // cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        int k = i-1;
        for (int j = 1; j <= i-1; j++)
        {

            cout<<k;
            k--;
        }
        cout<<endl;
    }
}