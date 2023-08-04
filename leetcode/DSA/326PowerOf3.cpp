#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = -1;
    int m =1;
    for (int i = 0; i < m; i++)
    {
        int j =pow(3,i);
        if (n == j)
        {
            cout<<"true"<<endl;
            i = i+m;
        }else if (n < j)
        {
            cout<<"false"<<endl;
            i = i+m;
        }
        m++;
    }
    
}
