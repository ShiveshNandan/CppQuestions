#include <iostream>
using namespace std;

int main()
{
    // int n ;
    // cout << "Enter the charecters" << endl;
    char c;
    c = cin.get();
    int countc = 0;
    int countd = 0;
    int d;
    // int d = cin.get();
    while (c != '$')
    {
        if (c == '$')
        {
            break;
        }
        else if (c = c)
        {
            countc++;
        }
        else
        {
            countd++;
        }

        c = cin.get();
        // d = cin.get();
    }
cout <<"char "<< countc << endl;
cout <<"int "<< countd << endl;
}
