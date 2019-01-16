//Write a C program to accept two integers and check whether they are equal or not.
#include <stdio.h>
 
int main(void) {
	int BaltoAge; int CinnamonAge;
	printf("How old is your first dog? \nHow old is your second dog? \n");
	scanf("%d%d", &BaltoAge, &CinnamonAge);
	printf("Your first dog is %d years old, and your second dog is %d years old.\n", BaltoAge, CinnamonAge);
	
	if(BaltoAge == CinnamonAge){
		printf("Your dogs are the same age!");
	}
	
	if(BaltoAge > CinnamonAge){
		printf("Your first dog is older than your second dog.");
	}
	
	if (BaltoAge < CinnamonAge){
		printf("Your first dog is younger than your second dog.");
	}
	return 0;
}
