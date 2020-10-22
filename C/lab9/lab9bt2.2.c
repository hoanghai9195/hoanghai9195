#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void min();
int main() {
	min();
	return 0;
}
void min(){
	int arr[10];
	int i,min,index;
	printf("Enter ten number interger :");
	for(i = 0;i < 10;i++){
		printf("Enter number %d :",i+1);
		scanf("%d",&arr[i]);
		
	}
	min = arr[0];
	index = 0;
	for (i = 1;i < 10;i++){
		if(min >  arr[i]){
			min = arr[i];
			index = i;
		}
	}
	printf("index of number min is : %d",index + 1);
}
