#include<iostream>
using namespace std;

void length( char a[]){
    int count = 0;
    int t = 1;
    for (int i = 0; i < t; i++)
    {

        if (a[i] == '\0')
        {
            cout<<count;
        }else{
            count++;
            t++;
        }
    }
}
void palindrome( char a[]){
    int count = 0;
    int t = 1;
    for (int i = 0; i < t; i++)
    {

        if (a[i] == '\0')
        {
            // cout<<count;
        }else{
            count++;
            t++;
        }
    }
    int check = 0;
    for (int j = 0; j < count/2; j++)
    {
        if (a[j] != a[count-j-1])
        {
            break;          
        }else{
            check++;
        } 
    }
    if (check == 0)
    {
        cout<<"false";
    }else{
        cout<<"true";
    }
    
    
}


int main(){
    char a[10];
    cout<<"enter a name of max. 10 char"<<endl;
    cin>>a;
    // length(a);
    palindrome(a);
}