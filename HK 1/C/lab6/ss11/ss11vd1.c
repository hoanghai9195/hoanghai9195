#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num[5];
	int i;
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 60;
	num[3] = 70;
	num[4] = 80;
	
	for(i = 0;i < 5;i++)
	   printf("\nNumber at [%d] is %d",i,num[i] );
	
	return 0;
}
