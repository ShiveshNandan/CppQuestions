#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main()
{
	printf("guess the number between 1 to 10 \n and you have only three chances\n\n\n\n\n\n\n");
	int a,b;
	int number = 4;
	int limit = 3;
	int count = 1;
	while(a != number and b==0) 
 	{
 		if(count<=limit)
 		{
		    printf("enter your number : ");
		    scanf("%d",&a);
		    count++;
	    }
	    else
	    {
	    	b=1;
		}
	}
	if(b==1)
	{
		printf("you loose");
	}
	else
	{
		printf("you win");
	}
}
