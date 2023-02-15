#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int even = 0;
    int odd = 0;
    int x = n % 10;
    int check = 0;
    int new_n = n;

    for (int i = 1; i <= 20; i++)
    {
        // cout << even << " " << odd << " " << new_n << endl;
        if (check == 0 && new_n != 0)
        {
            if (x % 2 == 0)
            {
                even = even + x;
            }
            else
            {
                odd = odd + x;
            }
            // cout << even << " " << odd << " " << new_n << endl;
            new_n = new_n / 10;
            x = new_n % 10;
        }
        else
        {
            check = 1;
        }
    }
    cout << even << " " << odd << endl;
    // cout << even << " " << odd << " " << new_n << endl;
}