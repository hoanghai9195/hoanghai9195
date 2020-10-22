#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float com = 0, sales_amt;
	
	printf("Enter the Sales amount:");
	scanf("%f", &sales_amt);
	
	if (sales_amt >= 10000){
	
	    com = sales_amt * 0.1;
	printf("\n Commission = %.2f", com);}
	
	return 0;
}
