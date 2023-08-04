#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string num1 = "888";
    string num2 = "2";
    string ans;
    long long  l1 = num1.length();
    long long  l2 = num2.length();
    long long  dig1 , dig2;
    long long  n = min(l1, l2);
    long long  m = max(l1, l2);
    long long  carry = 0;
    long long  s = 0;
    if (l1 == l2)
    {
        m= m+1;
    }

    for (long long  i = 0; i < m; i++)
    {
        dig1 = num1[l1 - 1] - 48;
        dig2 = num2[l2 - 1] - 48;


        if (l1 == 0 && l2 == 0 ){
            if (carry == 1)
            {
            ans.push_back(49);
            }
            
        }
        else if (l1 < 1)
        {
            s = dig2 + carry;
            carry = 0;
            l2--;
            ans.push_back(s + 48);

        }
        else if (l2 < 1)
        {
            s = dig1 + carry;
            carry = 0;
            l1--;
            ans.push_back(s + 48);
        }else if (l1 != 0 && l2 != 0)
        {
            s = (dig1 + dig2 + carry)%10;
            carry = ((dig1 + dig2 + carry)/10);
            l1--;
            l2--;
            ans.push_back(s + 48);

        }

    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}