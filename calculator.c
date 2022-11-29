//This programe is a simple mathimatical calculator
//The first phase can perform operators such as *,+,/ and -
//The program will be updated as i gain more knowledge about it

#include <stdio.h>
#include <math.h>
int main()
{
	int operand1, operand2;
	char operator;
	int ans;
	int press;

	//Prompt users to select thier prefered operator
	printf("press 1 to perform Adittion\n");
	printf("Press 2 to perform Subtraction\n");
	printf("Press 3 to perform Division\n");
	printf("Press 4 to perform Multiplication\n");
	printf("Press 5 to perform modulor\n");

	scanf(" %i", &press);

	if(press == 1) {
		printf("Enter operand1\n");
		scanf( " %i", &operand1);
		printf("Enter operand2\n");
		scanf(" %i", &operand2);

		ans = operand1 + operand2;
		printf("Your asnwer is %i\n", ans);
	}
	else if(press == 2) {
		printf("Enter operand1\n");
		scanf( " %i", &operand1);
                printf("Enter operand2\n");
                scanf(" %i", &operand2);

                ans = operand1 - operand2;
                printf("Your asnwer is %i\n", ans);
	}
	else if(press == 3) {
		printf("Enter operand1\n");
		scanf(" %i", &operand1);
		printf("Enter operand2\n");
		scanf(" %i", &operand2);

		ans = operand1 / operand2;
		printf("Your answer is %i\n",ans);
	}


	 else if(press == 4) {
                printf("Enter operand1\n");
                scanf(" %i", &operand1);
                printf("Enter operand2\n");
                scanf(" %i", &operand2);

                ans = operand1 * operand2;
		printf("Your answer is %i\n", ans);
        }
	//Trying to fix mod operator int it(check later
 	else if (press == 5) {
       		printf("Enter operand1\n");
		scanf(" %i", &operand1);
		printf("Enter operand2\n");
		scanf(" %i", &operand2);
		
		ans = operand1 % operand2;
		printf("Your answer is %i\n", ans);	
	}	

	else {
		printf("You entered the wrong number");
	}
	return 0;
}
