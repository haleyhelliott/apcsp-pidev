#include <stdio.h>

int main()
{
	int a = 0;

printf("a = 0\n");
printf("b = -2\n");

	if (a==0)
	{
		printf("a is equal to 0\n");
	}
	else
	{
		printf("a is not equal to 0\n");
	}

	int b = -2;

        if (a==b)
        {
                printf("a is equal to b\n");
        }
        if (a != b)
        {
                printf("a is not equal to b\n");
        }
	if (a > b)
	{
		printf("a is greater than b\n");
	}
	if (a >= b)
	{
		printf("a is greater than or equal to b\n");
	}
	if (a == 0 && b == 0)
	{
		printf("a is equal to 0 AND b is equal to 0\n");
	}
	if (a == 0 || b == 0)
	{
		printf("a is equal to 0 OR b is equal to 0\n");
	}
	if (!a == 0)
	{
		printf("a is NOT equal to 0\n");
	}
}
