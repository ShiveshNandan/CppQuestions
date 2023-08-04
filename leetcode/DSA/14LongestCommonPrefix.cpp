#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<string> v;
    v = {"flower", "flow", "flight","fldude"};

     string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.length(),last.length());i++){
            if(first[i] == last[i]){
            ans.push_back(first[i]);
            }else{
            cout<<ans<<endl;
            i = min(first.length(),last.length()) + 1;
            }
        }
        // return ans;

}