#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int number1, number2, number3;
	char operator;
	
	printf("Please enter a expression: ");
	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			number3 = add(number1, number2);
			break;
		case '-':
			number3 = sub(number1, number2);
			break;
		case '*':
			number3 = multi(number1, number2);
			break;
		case '/':
			number3 = div(number1, number2);
			break;
	}
	
	printf("result is %d.\n", number3);
	
	return 0;
}
 
int add(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int multi(int a, int b)
{
	return a*b;
}
 
int div(int a, int b)
{
	//TODO implementation
	return 0;
}
