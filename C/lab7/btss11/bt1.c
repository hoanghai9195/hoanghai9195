#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char s[7][20];
	char t[20];
	int i,j;
	
	for(i=0;i<7;i++){
		printf("Nhap vao chuoi thu %d:",i+1);
		scanf("%s",s[i]);
		
	}
	for(i=0;i<7;i++){
	
	for(j=0;j<7;j++){
		if(strcmp(s[j-1],s[j] )> 0){
			strcpy(t,s[j-1]);
			strcpy(s[j-1],s[j]);
			strcpy(s[j],t);
		}
	}}
	printf("\n Thu tu chuoi :");
	for(i=0;i<7;i++){
		printf("\n%s",s[i]);
	}
}
