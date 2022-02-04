#include <stdio.h>
#include <stdlib.h>

int main()
{

	int num1, num2, result;

	printf("Enter the two number: \n");
	scanf("%d %d", &num1, &num2);

	result=(num1,num2);

	printf("\nAddition of %d and %d is %d\n", num1, num2, result);

}

int add(int *no1, int *no2)
{
	int res;
	res = *no1 + *no2;
	return res;
}