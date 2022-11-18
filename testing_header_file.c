#include <stdio.h>
#include <string.h>
#include "header_file.h"

int main()
{
	char street_name[70] = "24 gooday street lagos, nigeria";
	//variables defined in header file
	printf("My fullname is %s %s %s, a %d year old,\n",FIRST_NAME, MIDDLE_NAME, LAST_NAME,AGE);
	printf("whose skill is %s\n", SKILL);

	printf("House address is %s\n", street_name);

	strcpy(street_name, "2 palace, london");
	printf("new address is %s\n", street_name);

	return 0;
}
