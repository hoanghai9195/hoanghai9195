#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num;
	num = 10;
	printf("\n Countdown");
	while(num >= 0){
		printf("\n%d", num);
		num--;
	}
	
	return 0;
}
