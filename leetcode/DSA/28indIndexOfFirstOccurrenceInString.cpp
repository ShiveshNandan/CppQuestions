#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";
    if (haystack.length() < needle.length())
    {
        // return -1;
        cout << -1 << endl;
    }
    for (int i = 0; i < haystack.length() - needle.length() + 1; i++)
    {
        string s = haystack.substr(i, needle.length());
        if (s == needle)
        {
            // cout<<"hi"<<endl;
            cout << i << endl;
            
        }
    }
    // return -1;
}