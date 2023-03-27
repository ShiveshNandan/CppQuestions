#include <iostream>
using namespace std;


void inputArray(int a[][100],int r,int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
    
}
void outputArray(int a[][100],int r,int c){
    cout<<"teri matrix with index number :  "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" "<<"("<<i<<","<<j<<")  ";
        }
        cout<<endl;
    }
    
}
void DoutputArray(int a[][100],int r,int c){
    cout<<"teri matrix :  "<<endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i%2 == 0)
            {
               cout<<a[j][i]<<" ";     
            }else{
               cout<<a[r-j-1][i]<<" ";     
            }
            
        }
        // for (int j = r; j > 0; j--)
        // {
        //     cout<<a[j][i+1]<<" "<<"("<<j<<","<<i<<")  ";
        // }
        
    }
    
}


int main(){
    int a[100][100];
    int r,c;
    cout<<"enter the row"<<endl;
    cin>>r;
    cout<<"enter the column"<<endl;
    cin>>c;
    inputArray(a,r,c);
    outputArray(a,r,c);
    DoutputArray(a,r,c);
}