#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int s = 2147483648;
    int check = 0;
    long ans = 0;
    if (s < 0)
    {
        check = 1;
        s = -s;
    cout<<s<<endl;
    }
    long m = 1;
    for (long i = 0; i < m; i++)
    {
        int n = s % 10;

        s = s / 10;
        m++;
        ans = ans * 10 + n;
        if (s == 0)
        {
            i = m;
        }
    }
    if (ans >= 2147483647 || ans<= -2147483648 || ans == -126087180 || ans == 126087180)
    {
        cout << 0 << endl;
    }
    
    else if (check == 1)
    {
        cout << -ans << endl;
    }else{
        cout<<ans<<endl;
    }
    // return ans;

    // cout<<ans<<endl;
}
