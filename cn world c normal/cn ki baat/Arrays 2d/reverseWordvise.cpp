#include <iostream>
using namespace std;

void reverseWord(char a[])
{
    int count = 0;
    for (int i = 0; i < count + 1; i++)
    {
        if (a[i] != '\0')
        {
            count++;
        }
    }
    // cout<<count<<endl;
    int x = count;
    for (int i = 0; i < (count) / 2; i++)
    {
        char temp = a[i];
        a[i] = a[x - 1];
        a[x - 1] = temp;
        x--;
        // cout<<" t "<<endl;
    }
    cout << a << endl<< endl;

    int o = 0;
    for (int x = 0; x < count + 1; x++)
    {
        if (a[x] == ' ' or a[x] == '\0')
        {
            int d = x;
            for (int i = 0; i < (x - o) / 2; i++)
            {
                // cout << i << endl;
                int temp1 = a[o+i];
                a[o+i] = a[d-1];
                a[d-1] = temp1;
                d--;
            }
            // cout << "newd " << x << "next " << o << endl;
            o = x+1;
        }
    }
    cout<<a<<endl;
}

int main()
{
    char a[40];
    // char c1 , c2;
    cout << "enter a name of max. 10 char" << endl;
    cin.getline(a, 40);
    reverseWord(a);
}