#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int a,b,c,sum;
	printf("\nenter any three number:");
	scanf("%d %d %d" ,&a,&b,&c);
	sum=calculatesum(a,b,c);
	printf("\nSum = %d",sum);
}
calculatesum(int x,int y,int z){
	int d;
	d=x+y+z;
	return(d);
}
	
