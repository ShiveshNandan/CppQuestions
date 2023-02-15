#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string number[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int check = 0;
    for (int i = a; i <= b; i++)
    {
        if (check == 0 && i <= 9)
        {
            cout << number[i - 1] << endl;
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
}