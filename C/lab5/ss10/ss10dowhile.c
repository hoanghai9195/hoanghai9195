#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int cnt1 = 0, cnt2;
	
	do{
		printf("\nEnter a Number:");
		scanf("%d",&cnt2);
		printf("No . is %d",cnt2);
		cnt1++;
	}   while (cnt2 != 0);
	printf("\n The total number entered were %d", --cnt1);
	return 0;
}
