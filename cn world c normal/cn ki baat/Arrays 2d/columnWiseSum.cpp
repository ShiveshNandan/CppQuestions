#include <iostream>
using namespace std;



int main()
{
    int a[100][100];
    int r, c;
    cout << "no. of rows: " << endl;
    cin >> r;
    cout << "no. of columns: " << endl;
    cin >> c;
    // input(a,r,c);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> a[i][j];
        }
    }
    // print(a,r,c);
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)

        {
            // cout <<i<<" "<<j<<" "<<a[i][j]<<endl;
            sum = sum + a[i][j];
        }
        cout <<sum<< endl;
    }
}