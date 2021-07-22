#include <stdio.h>
#include <conio.h>
int main(){
	float num1 ,num2 ;
	float tong ,hieu ,tich ,thuong ;
	
	printf("Nhap so num1 = ", num1);
	scanf("%f", &num1);
	printf("Nhap so num2 = ", num2);
	scanf("%f", &num2);
	
	tong = num1 + num2 ;
	hieu = num1 - num2 ;
	tich = num1 * num2 ;
	thuong = num1 / num2 ;
	
	printf("Tong 2 so =%.1f\n", tong);
	printf("Hieu 2 so =%.1f\n", hieu);
	printf("Tich 2 so =%.1f\n", tich);
	printf("Thuong 2 so =%.1f\n", thuong);
	
	getch();
	
	
	
	
}

