#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int integer[10],i;
	
	printf("enter 10 number integer :");
	for (i=0;i<10;i++){
		printf("number %d:\n",i+1);
		scanf("%d",&integer[i]);
	}
	printf("Result:");
	for(i=9;i>=0;i--){
		printf("%d,",integer[i]);
	}
	
}
