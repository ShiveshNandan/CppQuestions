#include<iostream>
using namespace std;


int main(){
    int a [100][100];
    int r,c;
    cout<<"enter row"<<endl;
    cin>>r;
    cout<<"enter col"<<endl;
    cin>>c;
    
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            // cout<<"at "<<r<<","<<c<<endl;
            cin >> a[j][i];
        }   
    }
    cout<<"done"<<endl;
    // sum column wise

    int sum = 0;
    for (int i = 0; i < c; i++)
    {
    // cout<<"start"<<endl;
        for (int j = 0; j < r; j++)
        {
            // cout<<a[j][i]<<endl;
            sum = sum + a[j][i];
        }
        cout<<"sum of column "<<i+1<<endl;
        cout<<sum<<endl;
        sum = 0;
    }
        
}