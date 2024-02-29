#include <iostream>
using namespace std;

int main () {
    int a,b = 2;
    a = 1;
    if(a-- > 0 && ++b > 2)
    cout<<"if"<<endl;
    else 
    cout<<"else"<<endl; 
    // int b = 9;  
    // cout <<"a "<< a << endl << "~a " << ~a << endl;
    // cout << "a^b "<< (a^b)<<endl;
    cout <<a<< " "<<b<<endl;
}