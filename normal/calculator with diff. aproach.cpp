#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a,b;
	char op;
	printf("given number : ");
	scanf("%f",&a);
	printf("given number : ");
	scanf("%f",&b);
	printf("what you want to : ");
	scanf("%s",&op);
	switch(op)
	{
		case '+' :
			printf("Answer :%f\n", a + b);
			break;
		case '-' :
			printf("Answer :%f\n", a - b);
			break;	
        case '*' :
			printf("Answer :%f\n", a * b);
			break;
		case '/' :
			printf("Answer :%f\n", a / b);
			break;
		default :
		printf("invalid\n");		
	}
	char q;
    printf("feedback:");
    scanf("%s",q);
    printf("thank you");
}
