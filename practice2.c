#include <stdio.h>
#define TAX_PAID 1550.45 //tax paid at the end of the month

// This programe is all about end of month bussiness account
//Product is electronic gadgets
int main()
{
	int gadgetBought;
	float totalSales, micelenous, totalSpent, netIncome;

	printf("How many gadget did you buy in the month?\n");
	scanf(" %d", &gadgetBought);

	printf("Month\'s total sale (enter in $XX.XX format)?\n");
	scanf(" $%f", &totalSales);

	printf("other bills (enter in $XX.XX format)?\n");
	scanf(" $%f", &micelenous);


	totalSpent = micelenous + TAX_PAID;
	netIncome = totalSales - totalSpent;

	printf("total money spent is %f, \n while net income is %f\n", totalSpent, netIncome);
	return 0;
}
