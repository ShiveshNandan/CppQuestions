#include<iostream>
using namespace std;

int main(){
    // string s = "aabccabba";
    // string s = "cabacabac";
    string s = "aabaaaaaaaasdgsdaaaabaa";
    
    int start = 0;
    int end = s.length() -1;
    cout<< start <<" "<<end<<endl<<endl;
    while(start < end){
         if (s[start] == s[end])
         {
            while (s[start] == s[start+1])
            {
                if (start>=end)
                {
                    break;
                }
                start++;
                cout<<s[start]<<" start "<<start<<endl;
                   
            }
            while (s[end] == s[end-1])
            {
                if (start>=end)
                {
                    break;
                }   
                end--;
                cout<<s[end]<<" end "<<end<<endl;
            }
            start++;
            end--;
            cout<<start<<" "<<end<<endl;
         }else{
            break;
         }
         
    }
    cout<<endl<<start<<" "<<end<<endl;
    cout<<end-start + 1;
}