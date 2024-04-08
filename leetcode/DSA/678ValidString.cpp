#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "(((*))";
    int brack = 0;
        for(int i = 0; i<s.size();i++){
            if(s[i] == '('){
                brack++;
            }else if(s[i] == ')'){
                brack--;
            }
            if(brack < 0){
                s.erase(i,1);
                brack++;
                i--;
            }
        }
        // cout<<brack<<endl;
        if (brack == 0)
        {
            cout<<s<<" first";
        }else{
            for (int i = s.size()-1; i >= 0; i--)
            {
                if (brack == 0)
                {
                    cout<<s<<" second";
                    break;
                }else if(s[i] == '(')
                {
                    s.erase(i,1);
                    brack--;
                    i++;
                }
            }
            
        }
        // cout<<brack;
        
}