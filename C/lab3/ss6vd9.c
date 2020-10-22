#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	char line[20];// line la mot mang luu 80 ki tu
	
	printf("nhap vao line :");
	scanf("%[ AAAAAA]",line);//chi duoc dung nhung cai trong[] tuc chi co A
	

	printf("line :%s",line)	;
	return 0;
}
