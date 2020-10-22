#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int test_Total();
int main() {
	printf("\n total of number from 300 to 500 mod 7 is :%d ",test_Total);
	
	
}
int test_Total(){
	int i;
	int sum = 0;
	for (i = 300;i<=500;i++){
		if (i%7==0){
			sum = sum += i;
		}
	}
//	return(sum);
}
