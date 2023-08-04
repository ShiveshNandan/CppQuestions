#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 10;
    int m = 0;
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (i%j != 0 )
            {
                cout<<i<<" hi "<<j<<endl;
            }
            
        }
                
    }
}
