#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float com = 0, sales_amt;
	char grade;
	
	

	
	
	printf("\n Enter the Sales amount :");
	scanf("%f", &sales_amt);
	
	printf("\n Enter the Grade :");
	fflush(stdin);
	scanf("%c", &grade);
	
	
	
	if (sales_amt > 10000){
	
		
	
	    if (grade == 'A')
	    
	    
	
		  
		
	      com = sales_amt * 0.1;
	    else 
	      com = sales_amt * 0.08;}
	    else 
	    com = sales_amt * 0.05;
	
	printf("\n Commission = %f ", com);
	
}
