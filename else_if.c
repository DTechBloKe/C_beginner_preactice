#include <stdio.h>

int main()
{
	int age;

	printf("Please enter your age\n");
	scanf(" %i", &age);

	if(age < 18 ){
		printf("You're below 18, you can't continue this programe\n");
	}
	else if(age > 50 ) {
		printf("Please the maximam age for this programe is 50\n");
	} else {
		printf("You are good to go!\n");
	}
	return 0;
}
