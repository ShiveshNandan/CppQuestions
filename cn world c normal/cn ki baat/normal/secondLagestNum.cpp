#include <iostream>
using namespace std;

int main()
{
    // int a = 67;
    int a;
    cout << "enter the number of elements" << endl;
    cin >> a;
    cout << "enter the numbers" << endl;
    int b[a];
    int ans = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (int j = 0; j < a-1; j++)
    {
        if (b[j]>b[j+1])
        {
            ans = b[j];
            
        }else if (b[j]<b[j+1])
        {
            ans = b[j+1];
        }
        
        cout<<ans<<" ";
        
        
    }
    
}