#include <stdio.h>
#include <string.h>
//#include "header_file.h"

int main()
{
	char firstInitial;
	char lastInitial;
	int age;
	int favorite_number;
	char skills[20];

	printf("What letter does your first name begin with?\n");
	scanf(" %c", &firstInitial);

	printf("What letter does your last name begin with?\n");
	scanf(" %c", &lastInitial);

	printf("How old are you?\n");
	scanf(" %d", &age);
	
	printf("What is your favorite number (integer only)?\n");
	scanf(" %d", &favorite_number);

	printf("Your skill?\n");
	scanf(" %s", skills);

	printf("\nYour intitials are %c.%c. and you are %d years old, %s",
	firstInitial, lastInitial, age, skills);

	printf("\nYour favorite number is %d.\n\n", favorite_number);
	return 0;
}
