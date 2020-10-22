#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,k;
	printf("Please enter number integer smaller 0:");
	scanf("%d",&i);
	if(i>0){
			for (j=i;j>0;j--){
			printf("\n");
			for(k=0;k<j;k++){
				printf("*");
			}		
		}
	}else{
		printf("\nNumber of you False!");
	}
	return 0;
}

