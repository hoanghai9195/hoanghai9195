#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int heron(int a,int b,int c);
int main() {
	int a,b,c;
	printf("Nhap lan luot 3 canh cua hinh tam giac :");
	scanf("%d %d %d",&a,&b,&c);
	if(a > 0 && b > 0 && c > 0){
		printf("dien tich hinh tam giac theo cogn thuc herong :%d",heron(a,b,c));
	}
	else{
		printf("khong hop le");
	}
	
}
int heron(int a,int b,int c){
	int p,s;
	p = (a+b+c)/2;
	s = p*(p-a)*(p-b)*(p-c);
	return(sqrt(s));
}
