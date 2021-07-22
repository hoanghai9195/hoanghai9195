#include <stdio.h>
#include <math.h>

int nguyento(int n);
int main(){
	int arr[5],i;
	printf("Please enter five number integer :");
	for (i = 0;i < 5;i++){
		printf("please enter number  %d:",i + 1);
		scanf("%d",&arr[i]);
	}
	for (i = 0;i < 5;i++){
		if(nguyento( arr[i]) == 0){
			printf("so nguyen to : %d\n",arr[i]);
		}
	}
}
int nguyento(int n){
	int i;
	int count;
	count = 0;

  
	
	if (n < 2 ){
	
//	printf("%d khong phai la so nguyen to",n);
	count = 1;
	return(count);
	
	
}


    
	count = 0;
	
		for(i =  2
		;i <= sqrt(n);i ++){
			if (n%i == 0){
				count++;}}
			if (count == 0)	{
	//		printf("\n%d la so nguyen to",n);
			}
			else{
				count = 1;
	//			printf("\n%d khong la so nguyen to",n);
				
			
			}
			return(count);
			}

