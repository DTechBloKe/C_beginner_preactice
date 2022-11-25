#include <stdio.h>

int main()
{
	int a,b,c,d;

	printf("Please enter a value\n");
	scanf(" %i",&a);

	printf("Please enter b value\n");
        scanf(" %i",&b);

	printf("Please enter c value\n");
        scanf(" %i",&c);

	printf("Please enter d value\n");
        scanf(" %i",&d);

	if((a > b) && (b < c) && ((c > d) || (a > c))){
		printf("valid!\n");
	} else {
		printf("wrong\n");
	}
	return 0;
}
