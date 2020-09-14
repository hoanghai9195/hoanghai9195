#include <stdio.h>
int main(){
	float top ,bottom ,height;
	
	printf("Nhap vao day nho = ");
	scanf("%f", &top);
	printf("Nhap vao day lon = ");
	scanf("%f", &bottom);
	printf("Nhap vao chieu cao = ");
	scanf("%f", &height);
	
	printf("Dien tich hinh thang = %.1f", (top + bottom) / 2 * height);
}
