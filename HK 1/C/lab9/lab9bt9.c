#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void diemtrungbinh_xeploai(float a,float b,float c);
int main() {
	float d;
	float e;
	float f;
	printf("Please enter math score of studen:");
	scanf("%f",&d);
	printf("Please enter physical score of studen:");
	scanf("%f",&e);
	printf("Please enter chemistry score of studen:");
	scanf("%f",&f);
	diemtrungbinh_xeploai(d,e,f);
	
}
void diemtrungbinh_xeploai(float a,float b,float c){
	float trungbinh;
	trungbinh=(a+b+c)/3;
	printf("diem trung binh la :%d",trungbinh = (a+b+c)/3);
	if(trungbinh >=5){
		if(trungbinh>=6.5){
			if(trungbinh>=8){
				printf("\n Diem trung binh SV la %f xep loai gioi",trungbinh);
			}
			else{
				printf("\ndirm trung binh sv la %f xl kha",trungbinh);
			}
		}
		else{
			printf("\n diem trung binh sv la %f xep loai tb",trungbinh);
		}
	}
	else{
		printf("\n yeu");
	}
	}

