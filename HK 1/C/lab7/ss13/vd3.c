#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char a,str[81],*ptr;
	printf("\nEnter a sentence:");
	gets(str);
	printf("\nEnter character to sesrch for:");
	a = getche();
	ptr=strchr(str,a);
	printf("\nString starts at address :%u",str);
	printf("\nFirst occurrence of the character is at address:%u",ptr);
	printf("\nPosittion of first occurrence (starting to 0) is:%d",strchr(str,a));
	
	return 0;
}
