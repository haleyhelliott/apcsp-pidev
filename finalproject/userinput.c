#include <stdio.h>


int main(int* array)
{
	int n;
	n = sizeof(array)/sizeof(array[0]);
	if (n != 5)
	{
		printf("Not the correct number of values. Try again.\n");
	}
	else if (n = 5)
	{
		printf("This is your code: %d\n", array[0]);
	}
}
