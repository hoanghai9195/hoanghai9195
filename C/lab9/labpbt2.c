#include <stdio.h>
#include <stdlib.h>

void nhapmang(int arr[],int n){
	int i;
	for(i = 0;i < n;i++){
		printf("Nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int n){
	int i;
	for (i = 0;i < n;i++){
		printf("\narr[%d] = %d",i,arr[i]);
		
	}
}
int minelement(int a[],int n){

int minvalue;
     minvalue = a[0];
    int i;
    for (i = 0;i < n;i++){
    	if (a[i] < minvalue){
    		minvalue = a[i];}
		}
		return (minvalue);
	}
	void getminposition(int a[],int n){
		int minvalue = minelement(a,n);
		int i;
		printf("\n Vi tri cua phan tu nho nhat :");
		
		for(i = 0;i < n;i++){
			if(a[i] == minvalue){
				printf("%d",i + 1 );
			}
		}
	}
    int main(){
    	int arr[100];
    	int n;
    	printf("nhap so phan tu mang :");
    	scanf("%d",&n);
    	nhapmang(arr,n);
    	xuatmang(arr,n);
    	getminposition(arr,n);
    	
		
    	
	}
