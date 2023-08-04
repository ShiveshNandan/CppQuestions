#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s = "-91283472332";
    long long n = s.size();
    long long ans = 0;
    int j = 0;
    int sign = 0;
    long long d = -91283472332;
    cout<<d;
    
    for (long long i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            sign = 1;
        }
        else if (s[i]-48 <= 9 && s[i]-48 >= 0)
        {
            ans = ans*j*10 + (s[i]-48);
            j=1;
        cout<<s[i]<<" "<<i<<endl;
        cout<<ans<<endl;
        }
    }
    if (sign == 1)
    {
        // return -ans;
        cout<<-ans<<endl;

    }
    
    // return ans;
    //     cout<<ans<<endl;
}
