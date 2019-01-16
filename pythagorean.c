#include <stdio.h>
#include <math.h>

int main(void) {
	printf("What appears before you is a right triangle.\n\n");
	printf("            /|\n");
	printf("           / |\n");
	printf("   side C /  | side B\n");
	printf("         /   |\n");
	printf("        /    |\n");
	printf("       /_____|\n");
	printf("       side A\n\n");
	
		char a = 'A';
		char b = 'B';
		char c = 'C';
	
	printf("The Pythagorean Theorem states the following:\n");
	printf("\"%c squared plus %c squared is equal to %c squared.\"\n", a, b, c);

		int letterB = 5;
		int letterA = 3;
		int letterCsquared = (letterA * letterA) + (letterB * letterB);
		float letterC = sqrt(letterCsquared);

	printf("\nIf %c = %d and %c = %d, \n", a, letterA, b, letterB);
	printf("then %c = %f.\n", c, letterC);
	return 0;
}
