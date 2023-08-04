#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 100;
    vector<string> vec1;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            vec1.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            vec1.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            vec1.push_back("Buzz");
        }
        else
        {
            vec1.push_back(to_string(i));
        }
    }
    cout << "[";

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << ",";
    }
    cout << "]" << endl;
    // return vec1;
}