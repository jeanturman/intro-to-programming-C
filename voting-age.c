//Write a C program to read the age of a candidate and determine whether she is eligible to vote.
#include <stdio.h>
 
int main(void) {
	int UserAge;
	printf("To determine your eligibility to vote in the upcoming election, please enter your age: ");
	scanf("%d", &UserAge);
	printf("\nYour given age is %d.", UserAge);
	
	if (UserAge <= 20){
		printf("\nSorry, it appears you are too young to vote in the next election.");
	}
	
	else {
		printf("\nDemocracy rules! You are eligible to vote in the upcoming election. Please be sure to register.");
	}
	return 0;
}
