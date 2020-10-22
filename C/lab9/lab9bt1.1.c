#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void revese();

int main() {
	revese();
	return 0;
}
void revese(){
	float arr[5];
	int i;
	printf("Enter five number float :");
	for (i = 0;i <5;i++){
		printf("\n enter number %d\n",i+1);
		scanf("%f",&arr[i]);
		
	}
	for (i = 4;i >= 0;i--){
		printf("Number %d :%0.1f\n",i+1,arr[i]);
	}
}
