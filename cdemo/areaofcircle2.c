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
	char input[256];
	char input2[256];
	float range1;
	float range2;
	printf("What is the lower value of your range?\n");
	while(1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%f", &range1) == 1) break;
		printf("Not a valid value - try again\n");
	}
	printf("What is the upper value of your range?\n");
	while(1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%f", &range2) == 1) break;
		printf("Not a valid value - try again\n");
	}
	float a;
	for (a = range1; a < range2+1; a++)
	{
		areaOfCircle(a);
	}
}
