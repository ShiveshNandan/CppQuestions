#include <iostream>
using namespace std;

int main(){
    int basic;
    char grade;
    cout<<"enter the basic and grade"<<endl;
    cin>>basic>>grade;
    
float hra   = (0.20 * basic);
float da    = (0.50 * basic);
float pf = (0.11*basic);
float allow;


if (grade == 'A')
{
    allow = 1700;
}else if(grade == 'B')
{
    allow = 1500;
}else
{
    allow = 1300;
}



 float totalSalary = (basic + hra + da + allow - pf) ;
 cout<<totalSalary<<endl;
}