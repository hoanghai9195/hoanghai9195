#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num1, num2;
	num1 = 77;
	num2 = 90;
	
	if (num1 == num2)
	   printf("\nThe Number are equal");
	else if (num1 < num2)
	   printf("\nThe Larger Number is num2 : %d", num2);
	else
	   printf("\nThe Larger Number is num1 : %d", num1);
	
	return 0;
}
