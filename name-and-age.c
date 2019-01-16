//Write a program that asks the user for his/her name. Then the program asks the user's age. 
#include <stdio.h>
 
int main(void) {
 
	char name[50];
	printf("What\'s your name? \n");
	scanf("%s", name);

 	int age;
	printf("How old are you, %s? \n", name);
	scanf("%d", &age);
	printf("%s is %d years old.\n", name, age);
 
	int category;
	
	if(age<=20){
		category=1;
	}
	else if(age>=21 && age<=60){
		category=2;
	}
	else if(age>=61){
		category=3;
	}
	else {
		category=4;
printf("Huh?");
	}
	
	switch(category){
		case 1 :	printf("%s, at %d years, you are still just a youngster!\n\n", name, age);
			printf("\tCheerily, then, my little man,\n");
			printf("\tLive and laugh, as boyhood can!\n");
			printf("\t\t\-\-John Greenleaf Whittier, from \"The Barefoot Boy\"\n");
			break;
		case 2 :	printf("%s, at %d years, you are in the prime of adulthood!\n\n", name, age);
			printf("\tAnd you O my soul where you stand,\n");
			printf("\tSurrounded, detatched, in measureless oceans of space,\n");
			printf("\tCeaselessly musing, venturing, throwing, seeking the spheres to connect them,\n");
			printf("\tTill the bridge you will need be form\'d, till the ductile anchor hold,\n");
			printf("\tTill the gossamer thread you fling catch somewhere, O, my soul.\n");
			printf("\t\t\-\-Walt Whitman, from \"A Noiseless Patient Spider\"\n");
			break;
		case 3 :	printf("%s, I\'m sorry to remind you that at %d, you are getting on in years.\n\n", name, age);
			printf("\tMusic, when soft voices die,\n");
			printf("\tVibrates in the memory;\n");
			printf("\tOdours, when sweet violets sicken,\n");
			printf("\tLive within the sense they quicken.\n\n");
			printf("\tRose leaves, when the rose is dead,\n");
			printf("\tAre heaped for the beloved\'s bed;\n");
			printf("\tAnd so thy thoughts, when thou art gone,\n");
			printf("\tLove itself shall slumber on.\n");
			printf("\t\t\-\-Percy Bysshe Shelley, \"Music, When Soft Voices Die\"\n");
			break;
		default :	printf("I cannot determine your age. Goodbye.");
			break;
	}
	
	printf("\nThank you for sharing your age, %s, and enjoy the years you have left.\nAs a computer, I cannot possibly understand the human concept of mortality.\nHave a nice day.", name);
 
	return 0;
}
