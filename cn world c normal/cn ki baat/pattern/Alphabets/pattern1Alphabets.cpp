#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    cout << "enter the number:" << endl;
    // cin >> n;
    char a = 'A';
    // cout<<a;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char b = a + j -1;
            cout<< b;            
        }
        cout<<endl;   
    }
    
}