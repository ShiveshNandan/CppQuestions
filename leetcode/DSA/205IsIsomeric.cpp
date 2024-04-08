#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s = "add";
    string t = "egg";
    string snew = s;
    string tnew = t;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            char temp;
            if (snew[i] == snew[j])
            {
            temp = tnew[j];
            tnew[j] = snew[j];
            snew[j] = temp;
            cout<<i<<" snew : "<<snew<<endl;
            cout<<i<<" tnew : "<<tnew<<endl;
            }
        }
        
    }

    
}