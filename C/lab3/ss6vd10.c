#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char line[40];
	printf("nhap vao chuoi line:\n");
	scanf("%[^D]",line);
	printf("%s",line);
	
	return 0;
}
