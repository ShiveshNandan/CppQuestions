#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s = "UDUDRLRL";
    int origin = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
        if (s[i] == 'U')
        {
            origin++;
        }
        else if (s[i] == 'D')
        {
            origin--;
        }
        else if (s[i] == 'L')
        {
            origin++;
        }
        else if (s[i] == 'R')
        {
            origin--;
        }
    }
        // cout<<origin<<endl;
        if (origin == 0)
        {
            return true;
        }return false;
        
}


// switch takes less time than if else 


// int l=0,d=0;
//         for(int i=0;i<m.size();i++)
//             switch(m[i])
//             {   case 'R':l--;break;
//                 case 'L':l++;break;
//                 case 'U':d--;break;
//                 default:d++;    }
//         if(l==0 and d==0)
//         return true;
//         return false;