#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "enter the number:" << endl;
    cin >> n;
    char a = 'A';
    // cout<<a;
    for (int i = 1; i <= n; i++)
    {
            char b = a + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << b;
            b++;
        }
        cout << endl;
    }
}