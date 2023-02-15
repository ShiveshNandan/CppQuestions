#include <iostream>
using namespace std;

int main()
{
    int n=4;
    cout << "enter the number:" << endl;
    // cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k=i;
        for (int j = 1; j <= i; j++)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
        
    }
    

}