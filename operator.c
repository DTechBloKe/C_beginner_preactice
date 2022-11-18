#include <stdio.h>
#include "header_file.h"

int main ()
{
	int x = 10;
	int y = 6;
	double total = x / y;
	int mod = x % y;

	printf("%d divided by %d is equal to %.2lf\n", x, y, total);
	printf("the remainder of %d devided by %d is %d\n", x, y, mod);
	printf(" In 3 years time, i'll be %d\n", 3 + AGE); 
	return 0;
}
