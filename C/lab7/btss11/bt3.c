#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[5];
	int i;
	for(i=1;i<=5;i++){
		printf("So thu %d: \n",i);
		scanf("%d",&arr[i]);
	}
	printf("thu tu nguoc lai day so:");
	for(i=5;i>=1;i--){
		printf("%d--",arr[i]);
	}
	return 0;
}
