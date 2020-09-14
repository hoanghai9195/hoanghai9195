#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float R, a, b, c;//a la canh hinh vuong,b la canh nho hinh chu nhat,c la canh lon hinh chu nhat,R la ban kinh hinh tron
	
	printf("Nhap vao ban kinh hinh tron :");
	scanf("%f", &R);
	printf("Nhap vao canh hinh vuong :");
	scanf("%f", &a);
	printf("Nhap vao canh nho va canh lon hinh chu nhat :");
	scanf("%f%f", &b,&c);
	
	printf("Chu vi va dien tich hinh tron = %.1f va %.1f\n", 2 * R * 3.14, R * R * 3.14);
	printf("Chu vi va dien tich hinh vuong = %.1f va %.1f\n", a * 4 , a * a);
	printf("CHu vi va dien tich hinh chu nhat =%.1f va %.1f\n", 2 * (b + c), b * c);
	return 0;
}
