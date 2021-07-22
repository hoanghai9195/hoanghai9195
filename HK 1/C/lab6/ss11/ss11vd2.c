#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int ary[10];
	int i,total,high;
	for (i = 0;i < 10;i++){
		printf("\nEnter value :%d:",i + 1);
		scanf("%d",&ary[i]);
		
	}
	high = ary[0];
	for (i = 1;i < 10;i++){
	
	    if (ary[i] > high)
	    high = ary[i];
	}
	printf("\n Highest value entered was %d",high);
	for (i = 0,total = 0;i < 10;i++)
	total = total + ary[i];
	printf("\nThe average of the element of ary is %d",total);

	    
	
	return 0;
}
