#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a,b;
	char c;
	printf("for :\n sum '+'  divide '/'  multiply '*' substract '-'\n\n\n\n");
	printf("first number : ");
	scanf("%f",&a);
	printf("second number : ");
	scanf("%f",&b);
	printf("operation : ");
	scanf("%s",&c);
	
	if (c == '+')
	{
		printf("%f", a + b);
	}else if (c == '/')
	{
		printf("%f", a / b);
	}
	else if (c == '*')
	{
		printf("%f", a * b);
	}
	else if (c == '-')
	{
		printf("%f", a - b);
	}
	else 
	{
		printf("invalid operation");
	}
	return 0;
}
