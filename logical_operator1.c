#include <stdio.h>

/* This program asks for a last name, and if the user has a last
name that starts with a letter between P and S, they will be sent to
a special room for their tickets. */

int main()
{
	// set up an array for the last name and then get it from the user
	char name[25];
	printf("What is your last name? ");
	printf("(Please capitalize the first letter!)\n");
	scanf(" %s", name);
	
	if ((name[0] >= 'P') && (name[0] <= 'S')){
		printf("Please go to room 2663 for your ticket\n");
	}
	else{
		printf("You can get your ticket here\n");
	}


	return 0;
}
