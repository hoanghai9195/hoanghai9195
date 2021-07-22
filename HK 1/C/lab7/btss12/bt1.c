#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int min,max;
	int i,j,n,k;
	int num[100];
	printf("\n mang co tat ca la:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("so thu %d la : ",i);
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(k=1;k<n;k++){
		if(max<num[k])
		max=num[k];}
	
	printf("Max la %d\n",max);
	
	min=num[0];
	for(j=1;j<n;j++){
	
	if(min>num[j])
	min=num[j];}
	printf("Min la %d\n",min);
	
	
	return 0;
}
