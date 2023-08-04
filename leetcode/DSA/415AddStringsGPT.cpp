#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string num1 = "851";
    string num2 = "2357";
    string ans;
    int l1 = num1.length();
    int l2 = num2.length();
    int carry = 0;

    // Make sure num1 is the longer number
    if (l1 < l2)
    {
        swap(num1, num2);
        swap(l1, l2);
    }

    for (int i = 0; i < l1; i++)
    {
        int dig1 = num1[l1 - 1 - i] - 48;
        int dig2;
        if (i < l2)
        {
            dig2 = num2[l2 - 1 - i] - 48;
        }
        else
        {
            dig2 = 0;
        }
        int sum = dig1 + dig2 + carry;
        carry = sum / 10;
        ans.push_back((sum % 10) + 48);
    }

    if (carry > 0)
    {
        ans.push_back(carry + 48);
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
