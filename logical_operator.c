#include <stdio.h>
//Logical operator practice


//This program try to messure the level of happines of users
//on the scale of 1-10.
//Then gives a custom 2-line message based on their range,
//either 1-2, 3-4, 5-7, or 8-10.

int main()
{
	char name[30];
	int happiness_level;

	//collect user's name
	printf("Please what is your name?(Note:Only first name needed)\n");
	scanf(" %s", name);

	//collect user's prefered level of happiness
	printf("On the scale of 1-10 how happy are you\n");
	scanf(" %i", &happiness_level);

	//Execute any of the following statemens if conditions are met
	if(((happiness_level <= 1) || ( happiness_level <= 2)) || (happiness_level <= 3)) {
		printf("Oh dear %s you're realy down, but I belive you can really pull this off!\n", name);
		printf("Don't you ever think up giving up!\n");
      	}
	else if	(happiness_level <= 4) {
		printf("You seems worried %s, I belive you can cheer up\n", name);
	}
	else if (((happiness_level <= 5) || ( happiness_level <= 6)) || (happiness_level <= 7)) {
		printf("You're doing pretty fine %s, you can still be more happier though\n", name);
	} else {
		printf("Wow %s, I'm really happy you are happy!\n", name);
	}

	return 0;
}

