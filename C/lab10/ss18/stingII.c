#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int i;
	char names[5][20];
	void uppername (char name_arr[]);
	for(i=0;i<5;i++){
		printf("\nenter string %d",i+1);
		scanf("%s",names[i]);
		
	}
	for(i=0;i<5;i++){
		uppername(names[i]);
		printf("\nNew string %d:%s",i+1,names[i]);
		
	}
	getch();
	
	
}
void uppername(char name_arr[]){
	int x;
	for(x=0;name_arr[x] !='\0';x++){
		if(name_arr[x] >= 97 && name_arr[x] <= 122)
		name_arr[x] =name_arr[x] - 32;
	}
}
