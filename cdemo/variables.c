#include <stdio.h>

int main()
{
	int a;
	int b = 3;
	int c;

	a = 2;
	c = a + b;
	printf("Sum of %d and %d is %d\n", a, b, c);

	int tmp;
	tmp = a;
        a = c;
	c = a + b;
        printf("Sum of %d and %d is %d\n", a, b, c); 
}
