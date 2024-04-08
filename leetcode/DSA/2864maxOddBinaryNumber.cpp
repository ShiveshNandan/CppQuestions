#include <iostream>
using namespace std;

int main() {
    string s = "111111";

    // for (int i = 0; i < ans.length(); i++)
    // {
    // cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    
    string ans;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1'){
            count++;
        }
    }
    cout<<count<<endl;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (count-1 > i)
        {
            ans.push_back('1');
        }else{
            ans.push_back('0');
        }
        
    }
    ans[s.length()-1] = '1';
    cout<<ans;

    
    
    // int n = s;
    // cout<<n;

}






// maa chod di approach ki leetcode ne

// int position = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '1')
//         {
//             s[position] = s[i];
//             s[i] = '0';
//             position++;
//         }
//     }
//         s[s.length()-1] = s[position-1];
//         s[position-1] = '0';
//         cout<<s;