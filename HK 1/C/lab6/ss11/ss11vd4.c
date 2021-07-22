#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char ary[5];
	int i;
	printf("\n Enter String:");
	scanf("%s", ary);
	printf("\nThe string is %s\n\n",ary);
	
	for (i = 0;i < 5;i++)
	printf("\t%d",ary[i]);
	
	return 0;
}
