#include <stdio.h>

 float areaOfCircle (float a)
{
	float x;
	x = 3.14 * a * a;
	printf("%f\n", x);
	return x;
}
 int main()
{
	float a;
	for (a = 3.5; a < 12.5; a++)
	{
		areaOfCircle(a);
	}
}
