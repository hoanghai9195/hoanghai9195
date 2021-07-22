#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,k;
	for(i=1;i<=5;i++){
		printf("\n");
		if(i==1){
			printf("(a)%d",i);
		}
		else{
			for(j=1;j<=i;j++){
				printf("%d",j);
			}
		}
	}
	for(i=5;i>=1;i--){
		printf("\n");
		if(i==5){
			printf("(b)");
			for(j=1;j<=i;j++){
			printf("%d",j);
			}
		}
		else{
			for(j=1;j<=i;j++){
				printf("%d",j);
			}
		}
	}
	
	return 0;
}
