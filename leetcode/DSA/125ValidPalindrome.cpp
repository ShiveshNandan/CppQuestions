#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s = "race a car";
    string nn = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n = s.size();
    cout << s << endl;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            nn.push_back(s[i]);
        }
    }
    cout << nn << endl;
    for (int i = 0; i < nn.size() / 2; i++)
    {
        if (nn[i] != nn[nn.size() - i - 1])
        {
            // cout<<nn[i]<<endl;
            cout << "false" << endl;
            // cout<<nn[nn.size() - i - 1]<<endl;
        }
        else
        {
            cout << "true" << endl;
        }
    }
}

// int start = 0;
// int end = s.size() - 1;
// while (start <= end)
// {
//     if (!isalnum(s[start]))
//     {
//         start++;
//         continue;
//     }
//     if (!isalnum(s[end]))  
//     {
//         end--;
//         continue;
//     }
//     if (tolower(s[start]) != tolower(s[end]))
//         return false;
//     else
//     {
//         start++;
//         end--;
//     }
// }
// return true;