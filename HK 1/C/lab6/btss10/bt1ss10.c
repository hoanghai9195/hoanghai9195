#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int tuoi,i;
	char name[30];
	printf("Nhap ten:");
	gets(name);
	printf("SO tuoi:");
	scanf("%d",&tuoi);
	for(i=0;i<tuoi;i++){
		printf("%s",name);
	}
	
	return 0;
}
