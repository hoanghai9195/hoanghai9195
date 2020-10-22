#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int nguyento(int n){
	int i;
	int count;
	count = 0;

  
	
	if (n < 2 ){
	
	printf("%d khong phai la so nguyen to",n);
	count = 1;
	return(0);
	
	
}


    
	count = 0;
	
		for(i =  2
		;i <= sqrt(n);i ++){
			if (n%i == 0){
				count++;}}
			if (count == 0)	{
			printf("\n%d la so nguyen to",n);
			}
			else{
				count = 1;
				printf("\n%d khong la so nguyen to",n);
				
			
			}
			return(count);
			}
		
	
	
	int main(){
		int n;
		printf("Nhap n: \n");
		scanf("%d",&n);
		nguyento(n);
	}
