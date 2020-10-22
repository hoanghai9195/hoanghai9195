#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1=0,n2=1,n3,i,num;
	printf("so phan tu trong day :");
	scanf("%d",&num);
	printf("\n%d %d",n1,n2);
	for(i=2;i<num;i++){
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
	
	return 0;
}

