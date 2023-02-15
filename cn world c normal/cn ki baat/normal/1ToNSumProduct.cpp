#include <iostream>
using namespace std;

int main()
{
    int N,C;
    cout << "Enter the number" << endl;
    cin>>N;
    cout << "Enter the Operation" << endl;
    cin>>C;
    int ansP = 1;
    int ansS = 0;
     if (C == 1)
        {
            for (int i = 1; i <= N; i++)
            {
                ansS = ansS+i;
            }
            cout<<ansS<<endl;
        }else if (C==2)
        {
             for (int i = 1; i <= N; i++)
            {
                ansP = ansP*i;
            }
            cout<<ansP<<endl;
        }else{
            cout<<"-1"<<endl;
        }    
}
