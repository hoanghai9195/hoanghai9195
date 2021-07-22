#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void daonguocchieu(int a[],int n) {
	int i;
	for( i = 0;i <= n/2;i++){
		int temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i]= temp;}
		printf("\n MAng dao nguoc la :");
	for( i = 0;i < n;i++){
			printf("%d\t",a[i]);
		}}
//		void daonguocchieu2(int a1[],int n1){
//			int j;
//			printf("DAo nguoc chieu mang :");
//			for ( j = n1;j > 0;j--){
//				printf("%d \t",a1[j]);
//				return(a1);
//			}
//		}
//	}
	int main(){
		int n,i;
		printf("Nhap so phan tu :");
		scanf("%d",&n);
		int a[i];
		for (i = 0;i < n;i++){
		
		printf("phan tu thu %d :",i);
		scanf("%d",&a[i]);}
		printf("CAc phan tu lan luot la :");
		for(i = 0;i < n;i++){
			printf("%d \t",a[i]);
		}
		daonguocchieu(a,n);
		
	}
	
	
	
	
	
	

