#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char item[20];
	int partno;
	float cost;
	
	
	scanf("%s %*d %f",item,&partno,&cost);
	printf(" gia tri s d f = %s %d %f",item,partno,cost);
	
}
