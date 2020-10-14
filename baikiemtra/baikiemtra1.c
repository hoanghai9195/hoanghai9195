#include <stdio.h>
#include <stdlib.h>

int sum(float a,float b);
int substraction(float a,float b);
int multiplication(float a,float b);
int division(float a,float b);
int sum(float a,float b){
	float summ;
	summ = a+b;
	printf("Sum :%.1f",summ);}
int substraction(float a,float b){
	float substractionn;
	substractionn = a-b;
	printf("Substraction :%.1f",substractionn);
}
int multiplication(float a,float b){
	float multiplicationn;
	multiplicationn = a*b;
	printf("Multiplication :%.1f",multiplicationn);
}
int division(float a,float b)	{
	float divisionn;
	divisionn = a/b;
	printf("Division :%.1f",divisionn);
}

int main() {
	float a,b,c;
	int i;
	printf("Enter two number :");
	scanf("%f %f",&a,&b);
	printf("Moi an cac so 3 2 1 0  tuong ung voi cac chuc nang tinh *tong *hieu *nhan *chia 2 so \n");
    for (i=0;i<100;i++){
	
	printf("\n\nban chon mot cach tinh tuong ung :");
	scanf("%f",&c);
	
	if (c <= 3){
	
		if (c == 3){
		
		sum(a,b);
		}
		if 
		(c == 2){
		
		
		substraction(a,b);
		}
		if
		 (c == 1){
		 
		
		multiplication(a,b);
		}
		if
		(c == 0){
		
		
		division(a,b);
		}}
		else {
			printf("Moi nhap lai");
		}
	}
}
	
	

