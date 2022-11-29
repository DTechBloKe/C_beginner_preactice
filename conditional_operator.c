/*This program sets this account user
 *spending limit at $100 max
 */
#include <stdio.h>

int main()
{
	float spending_limit = 100;
	float shopping_cost;

	printf("Enter shopping cost here\n");
	scanf(" %f", &shopping_cost);

	(shopping_cost <= spending_limit) ? printf("You have enough money\n") :
	printf("You've exeeded your spending limit by $%.2f\n", (shopping_cost - spending_limit)); 
	return 0;
}
