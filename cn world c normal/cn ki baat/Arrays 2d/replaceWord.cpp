#include<iostream>
using namespace std;

void replace(char a[],char c1 ,char c2){
    int t=1;
    for (int i = 0; i < t ; i++)
    {
        if (a[i]=='\0')
        {
            break;
        }
        
        else if (a[i]==c1)
        {
            a[i] = c2;
            t++;
        }else{
            t++;
        }   
    }
    cout<<a;
}

int main(){
    char a[10];
    char c1 , c2;
    cout<<"enter a name of max. 10 char"<<endl;
    cin>>a;
    cout<<"character to replace"<<endl;
    cin>>c1>>c2;
    replace(a,c1,c2);
}