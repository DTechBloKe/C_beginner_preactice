#include <stdio.h>

/*This programe calculates your course averag grade
 */
 
  int main()
{
	//declare subjects
	int Math, Eng , Comp, Phys, Chem, Bio;
	float gradeAverage;

	//use scanf to collect score data to calculate average score
	printf("Math score (input format should be 0 - 100)?\n");
	scanf(" %d", &Math);
	printf("Comp score (input format should be 0 - 100)?\n");
	scanf(" %d", &Comp);
	printf("Phys score (input format should be 0 - 100)?\n");
	scanf(" %d", &Phys);
	printf("Chem score (input format should be 0 - 100)?\n");
	scanf(" %d", &Chem);
	printf("Eng score (input format should be 0 - 100)?\n");
        scanf(" %d", &Eng);
	printf("Bio score (input format should be 0 - 100)?\n");
        scanf(" %d", &Bio);

	gradeAverage= (Math+Eng+Comp+Phys+Bio+Chem)/6;
	printf("Your average score is %.3f\a", gradeAverage);
	
	//add percentage later
	return 0;
}
