#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,result;
	char c;
	// add='+';
	// sub='-';
	// mult='*';
	// divi='/';
	printf("enter the first number: \n");
	scanf("%d",&num1);
	printf("enter the second number: \n");
	scanf("%d",&num2);
	printf("enter the operator +,-,*,/\n");
	scanf("%c",&c);
	switch(c){
	case '+':
	result=num1+num2;
	printf("%d + %d = %d\n",num1,num2,result);
	break;
	case '-':
	result = num1-num2;
	printf("%d - %d = %d\n",num1,num2,result);
	break;
	case '*':
	result = num1 * num2;
	printf("%d * %d = %d\n",num1, num2,result);
	break;
	case '/':
	result = num1/num2;
	printf("%d / %d = %d\n",num1,num2,result);
	break;
	default:
	printf("enter the numbers for mathematical operation.\n");
	}
	getch();
}