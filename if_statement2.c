#include <stdio.h>
#define CURRENT_YEAR 2022

/* This program asks the user for their birth year and calculates
how old they will be in the current year. (it also checks to make
sure a future year has not been entered.) It then tells the user if
they were born in a leap year. */

int main(void)
{
	int year_born, age;
	char name[30];

	// Ask user's name
	printf(" Hello, what is your name(Note: Enter first name only)?\n");
	scanf(" %s", name);

	//Ask user year born
	printf("What year were you born?\n");
	scanf(" %i", &year_born); //store user's answer in the variable(year_born)
	
	//Incase user mistakenly input year grater than current year
	if(year_born > CURRENT_YEAR)
	{
		printf("Hey yo are you from the future?\n\n");
		//Try again in case of mistake
		printf("Want to try again with a different year?\n");
		printf("What year were you born?\n");
		scanf(" %d", &year_born);
		
	}

	//calculate age
	age = CURRENT_YEAR - year_born;
	printf("%s, you are %i years old\n", name, age);


	// The second if statment uses the modulus operator to test if
	// the year of birth was a Leap Year. Again, only if it is will
	// the code execute
	
	if ((year_born % 4) == 0)
	{
		printf("\nYou were born in a Leap Year--cool!\n");
	}

	return 0;
}
