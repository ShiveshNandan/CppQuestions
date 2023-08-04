#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 8;
    int ans = 1;
    int a = 1;
    for (int i = 1; i < n; i++)
    {
        int j = ans;
        ans = ans + a;
        a = j;

    }
    // return 1;
    cout << ans << endl;
}
