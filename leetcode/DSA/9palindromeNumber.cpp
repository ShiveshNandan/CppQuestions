#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int x = 1;
    int m =1;
    int reserved = 0;
    int c = x;

    if (x < 0)
    {
        cout<<"false"<<endl;
        // return false;
    }

    for (int i = 0; i < m; i++)
    {
            int j = c%10;
            reserved = reserved*10 + j;
            m++; 
        // cout<<m<<endl; 
        c = c/10;   
        if (c == 0)
        {
            i = i+m;
        }
        
    }
        // cout<<reserved<<endl; 
        if (reserved == x)
        {
            cout<<"true"<<endl;
            // return true;
        }cout<<"false"<<endl;
        // return false;    
}