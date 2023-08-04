#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string num1 = "498828660196";
    string num2 = "84098073";
    long long l1 = num1.length() - 1;
    long long l2 = num2.length() - 1;
    long long num11 = 0;
    long long num22 = 0;
    for (long long i = 0; i < l1 + 1; i++)
    {
        num11 = num11 + (pow(10, i)) * (num1[l1 - i] - 48);
    }
    // cout<<num11<<endl;
    for (long long i = 0; i < l2 + 1; i++)
    {
        num22 = num22 + (pow(10, i)) * (num2[l2 - i] - 48);
    }
    // cout<<num22<<endl;
    long long as = num11 * num22;
    // cout<<as<<endl;
    string ans = "";

    long long a;
    for (long long i = 0; i < 5000; i++)
    {
        a = as % 10;
        // cout<<a<<endl;
        // cout<<a<<"up"<<endl;
        ans.push_back(a + 48);
        as = as / 10;
        // cout<<a<<"down"<<endl;
        if (as == 0)
        {
            i = 20000;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}