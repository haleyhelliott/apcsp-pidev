#include <stdio.h>

int main()
{
	int i = 10;
	float f = 1.23;
	char c = 'b';
	double d = 123.456;
	unsigned int a = 15;
	short int b = 7;

	printf("My int is : %d, my float is %f, my char is %c, my double is %f\n", i, f, c, d);

	printf("My int has a size of %d bytes\n", sizeof(i));

        printf("My float has a size of %d bytes\n", sizeof(f));

        printf("My char has a size of %d bytes\n", sizeof(c));

        printf("My double has a size of %d bytes\n", sizeof(d));

	printf("My unsigned int has a size of %d bytes\n", sizeof(a));

	printf("My short int has a size of %d bytes\n", sizeof(b));
}
