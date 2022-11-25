/* This program asks the user for their birth year and calculates
how old they will be in the current year. (it also checks to make
sure a future year has not been entered.) It then tells the user if
they were born in a leap year. */

#include <stdio.h>
#define CURRENT_YEAR 2022

int main()
{
	int yearBorn, age;

	printf("What year were you born?\n");
	scanf(" %i", &yearBorn);

	// This if statement can do some data validation, making sure
	// the year makes sense
	// The statements will only execute if the year is after the
	// current year
	
	if(yearBorn > CURRENT_YEAR) {
		printf("Really? You're from the future? wawu!\n");
	} else {

		age = CURRENT_YEAR - yearBorn;
		printf("You're %i years old\n", age);

		// The second if statment uses the modulus operator to test
		// if the year of
		// birth was a Leap Year. Again, only if it is will the code
		// execute
		if ((yearBorn % 4) == 0)
		 {
		 printf("\nYou were born in a Leap Year--cool!\n");
		 }

		 }
	
	return 0;
}
