#include <stdio.h>

int main()
{
	int div = 5;

	for (int a = 0; a < 101; a++)
	{
		if ( a % div == 0)
		{
			printf("%d\n", a);
		}
	}
}
