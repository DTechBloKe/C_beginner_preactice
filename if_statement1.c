#include <stdio.h>

/*This programe is a practice of IF condition.
 *The user is being asked to provide his/her age. If age is 18 or above,
 *user will be prompted with the message "Now you're one step away".
 *But if the user is below 18, decline message pops.
 */
int main(void)
{
	//variable age
	int age;

	//Prompt user to enter their age
	printf("Please enter your age: ");

	//store user's answer in the variable(age)
	scanf(" %i", &age);

	//check if age is less than 18
	//if it is, then and only then print a message to the console

	if(age < 18)
	{
		printf("You have to be 18 or above to have acccess into this site\n\a");
	}

	//check if age is 18 and above
	//if true, print a message to the console
	
	if(age >= 18) {
		printf("Now you're one step away\n");
	}


	return 0;
}
