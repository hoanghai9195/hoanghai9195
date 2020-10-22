#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	float d;
	char ch ,name[40];
	
	printf("Please enter the data\n");
	scanf("%d %f %c %s", &a, &d, &ch, name);
	printf("\nThe values accepted are : %d, %f, %c ,%s", a,d,ch,name);
	
	
	return 0;
}
