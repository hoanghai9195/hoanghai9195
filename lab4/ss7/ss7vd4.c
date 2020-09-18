#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	char c;
	printf("Please enter a character :");
	scanf("%c",&c);
	if (c >= 'A' && c <= 'Z')//A = 65;Z = 90
	printf("Lowercase character = %c",c + 'a' - 'A');//a = 97
	else
	printf("Character Entered is = %c",c);
	return 0;
}
