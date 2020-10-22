#include <stdio.h>
int main(){
	float toan, li, hoa;
	
	printf("Nhap diem mon toan = ");
	scanf("%f", &toan);
	printf("Nhap diem mon li = ");
	scanf("%f", &li);
	printf("Nhap diem mon hoa = ");
	scanf("%f", &hoa);
	
	printf("Tong diem va diem trung binh 3 mon = %.1f va %.1f", toan + li + hoa, (toan + li + hoa) / 3);
	getch();

}
