#include <stdio.h>
#include <string.h>

void main()

{
int a = 1;
	while (a == 1)
	{
		char input [256];
		float choice;
		printf("Do you want to guess the five integers of the computer (1), or do you want the computer to guess your five integers (2)?\n");

	fgets (input, 256, stdin);
	sscanf (input, "%f", &choice);

		if (choice == 1)
		{
			printf("hi\n");
			break;
		}
		else if (choice == 2)
		{
			printf("bye\n");
			break;
		}
		else
		{
			printf("Not a valid integer, try again\n");
		}
	}
}
