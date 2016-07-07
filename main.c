#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int number1, number2, result;
	char operator;
	
	printf("Please enter a expression: ");
	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			result = add(number1, number2);
			break;
		case '-':
			result = sub(number1, number2);
			break;
	}

	if (operator == *) {
	   	result = multi(number1, number2);
	} else if (operator == /) {
	    	div = multi(number1, number2);
	}
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int number1, int number2)
{
	if (number1 < 0) {
		number1 = 0;
	}
	return (number1 + number2)
}
 
int sub(int number1, int number2)
{
	//TODO implementation
	return 0;
}
 
int multi(int number1, int number2)
{
	if (number2 > 0) {
            return number1 * number2;
        }
	return 0;
}
 
int div(int number1, int number2)
{
	if (number2 > 0) {
            return number1 / number2;
        }
	return 0;
}