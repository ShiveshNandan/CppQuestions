#include<iostream>
using namespace std;

void trim(char a[]){
    int t = 1;
    for (int i = 0; i <t; i++)
    {
        if (a[i] == '\0')
        {
            break;
        }else if (a[i] == ' ')
        {
            int d = i;
            for (int d = i; a[d-1] != '\0'; d++)
            {
                int temp = a[d];
                a[d] = a[d+1];
                a[d+1] = temp;
            }
            if (a[d] == ' ')
            {
                i = i - 1;
            }
            t++;
        }else{
            t++;
            // cout<<"else ";
        }
            // t++;
    }
    
    cout<<a;
}

int main(){
    char a[50];
    // char c1 , c2;
    cout<<"enter a name of max. 50 char"<<endl;
    cin.getline(a,50);
    // cout<<"character to replace"<<endl;
    // cin>>c1>>c2;
    trim(a);
}