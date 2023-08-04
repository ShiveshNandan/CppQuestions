#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void addDigits(int num) {
    // cout<<"hw"<<endl;
      if(num==0){
          // return 0;
          cout<<0<<endl;
          cout<<"ds"<<endl;
      }
      else if(num%9==0){
          // return 9;
          cout<<9<<endl;
          cout<<"fg"<<endl;
      }

      else{
        int a = num%9;
          // return a;
          cout<<a<<endl;
          cout<<"ad"<<endl;
      }
    }

int main(){
  
    addDigits(364);
     cout<<"hi"<<endl;
}