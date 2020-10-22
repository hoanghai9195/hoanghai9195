#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	char name1[15]="Geena";
	char name2[15]="Dorothy";
	char name3[15]="Shania";
	char name4[15]="Geena";
	int i;
	i=strcmp(name1,name2);
	printf("%s cmpare with %s return %d\n",name1,name2,i);
	i=strcmp(name1,name3);
	printf("%s compare with %S return %d\n",name1,name3,i);
	i=strcmp(name1,name4);
	printf("%s compare with %s return %d\n",name1,name4,i);
	getch();
	
}
