#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string a = "1";
    string b = "10101";
    string ans;
    int carry = 0;
    int l1 = a.length();
    int l2 = b.length();
    int dig2;
    if (l1 < l2)
    {
        swap(l1,l2);
        swap(a,b);
    }
    for (int i = 0; i < l1 ; i++)
    {
        int dig1 = a[l1 - 1 - i] - 48 ;
        // cout<<"dig1 "<<dig1<<endl;
        if (i < l2)
        {
            dig2 = b[l2 - 1 -i] -48;
        } else
        {
            dig2 = 0;
        }
        // cout<<"dig2 "<<dig2<<endl;
        int s = dig1 + dig2 + carry;
        carry = s/2 ;
        ans.push_back(s%2 + 48);
    }
    
    if (carry == 1)
    {
        ans.push_back(49);
    }

    reverse(begin(ans), end(ans));
    cout<<ans;
}