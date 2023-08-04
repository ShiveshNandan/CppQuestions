#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s = "abcdefg";
    int k = 2;
    for (int i = 0; i < s.size(); i += 2 * k) {
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k);
            } else {
                reverse(s.begin() + i, s.end());
            }
        }
    // cout<<g<<endl;
    cout<<s<<endl;
}
