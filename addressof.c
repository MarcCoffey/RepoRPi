#include <stdio.h> // include the standard I/O library

char letter;
int num1, num2; // multiple variables of the same type can be created togeter by using a comma-seperated list
char answer;


int main() {
	
  printf("Enter any character: ");
	scanf("%c", &letter);
	printf("Enter two integers seperated by a space: ");
	scanf("%d %d", &num1, &num2);
	
	printf("Your integer numbers were: %d and %d \n", num1, num2);
    printf("These two values add up to: %d \n", num1 + num2);
	printf("The character you chose was: %c \n", letter);
	printf("Your char variable was stored at memory address: %p \n", &letter); 
	printf("Your integer variables num1 and num2 were at memory addresses %p and %p respectivly  \n", &num1, &num2);
	
	printf("Enter any character to exit");
	scanf("\n %c", &answer);
	printf("Goodbye!");

	
	return 0;
}
	