#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "loveleetcode";


    //--------------------------- this is basic aproach with exceeded time limit -------------------------------

    // int check = 0;
    // string g = s;
    // cout << s << endl;

    // for (int i = 0; i < g.size(); i++)
    // {
    //     for (int j = 0; j < g.size(); j++)
    //     {
    //         if (g[i] == g[j])
    //         {
    //             check ++ ;                
    //         }
            
    //     }

    //     if (check == 1)
    //     {
    //         cout << i << endl;

    //     }
    //     check = 0;
    // }
    // cout << s << endl;


    // --------------------------something new to learn hash table --------------------------------------
    unordered_map<char,int> map;
    
    for (int i = 0; i < s.length(); i++)
    {
        map[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (map[s[i]] == 1)
        {
            cout<<s[i]<<endl;
            i = i+ s.length();
        }
        
    }
    
    for (auto i = map.begin(); i !=map.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    
}
