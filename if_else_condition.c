#include <stdio.h>

int main()
{
	int age;

	//prompt user to input age
	printf("Hello, how hold are you?\n");

	//save user's input in the variable(age)
	scanf(" %i", &age);

	//in the bellow condition statement, if user is below 18
	//run the IF programe
	//if otherwise, run the ELSE programe
	if (age < 18) {
		printf("You're under 18, sorry you can't continue\n");
	} else {
		printf("You're one step away from completing your registration!\n");
	}

	return 0;
}
