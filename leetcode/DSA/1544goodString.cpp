#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "leELeetcode";
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - s[i+1] == 32)
        {
            s.erase(i,2);
            i = -1;
        }else if (s[i] - s[i+1] == -32)
        {
            s.erase(i-1,2);
            i = -1;
        }
        cout<<s<<" "<<i<<endl;

    }
    
}