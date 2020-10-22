#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c;
	a=b=c=0;
	printf("\nEnter 1st integer:");
	scanf("%d",&a);
	printf("\nEntter 2st integer:");
	scanf("%d",&b);
	c=adder(a,b);
	printf("\n\na & b in main () are: %d , %d",a,b);
	printf("\n\nc in main () is:%d",c);
}
adder(int a,int b){
	int c;
	c= a+b;
	a*=a;
	b += 5;
	printf("\n\na & b within adder function are: %d, %d",a,b);
	printf("\nc within adder function is:%d",c);
	return(c);
}
	

