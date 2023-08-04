#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "naaram";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
    {
        // return true;
        cout << "true" << endl;
    }
    // return false;
    cout << "false" << endl;
}