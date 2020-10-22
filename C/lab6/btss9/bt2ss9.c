#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float num1,num2;
	int i;
	float sum = 0;
	printf("num1 = \n");
	scanf("%f",&num1);
	printf("num2 = \n");
	scanf("%f",&num2);
	if(num1 > num2){
		for(i=num2;i<=num1;i++){
			if(i%2!=0){
			
			sum=sum+i;}
		}
		printf("\nTOng cua cac so le giau num1 va num2 :%.1f",sum);
	}else{
		if(num2 > num1){
			for(i=num1;i<=num2;i++){
				if(i%2!=0){
					sum=sum+i;
				}
			}
			printf("\n tong cac so le giau num2 va num1 :%.1f",sum);
		}else{
			printf("tong bang 0");
		}}
	
	
	return 0;
}
