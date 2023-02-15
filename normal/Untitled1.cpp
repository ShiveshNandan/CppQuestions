#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	cout<<"guess the number between 1 to 10 \n and you have only three chances\n\n\n\n";
	int a,b;
	int number = 4;
	int limit = 3;
	int count = 1;
	while ( a != number and b==0); 
 	{
 		if(count<=limit)
 		{
		    cout<<"enter your number : ";
		    cin>>a;
		    count++;
	    }
	    else
	    {
	    	b=1;
		}
	}
	if(b==1)
	{
		cout<<"you loose";
	}
	else
	{
		cout<<"you win";
	}
}

