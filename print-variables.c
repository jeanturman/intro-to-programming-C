#include <stdio.h>
 
int main(void) {
 
	int number; 
	char letter; 
	float decimal;
	printf("Please enter a whole number, a letter, and a decimal: ");
	scanf("%d %c %f", &number, &letter, &decimal);
	printf("\nThe value of the number is: %d \nThe letter you selected is: %c \nThe decimal you entered is %f", number, letter, decimal);
 
	return 0;
}
