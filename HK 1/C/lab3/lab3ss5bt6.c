#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float sothuc;
	
	
	printf("Enter Sothuc : ");
	scanf("%f", &sothuc);
	printf("The value of sothuc theo foot is %.1f\n\n",(sothuc / 2.54) /12);
	printf("The value of sothuc theo inches is %.1f\n\n",sothuc / 2.54);
	
	return 0;
}
