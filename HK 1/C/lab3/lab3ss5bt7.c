#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;
	
	printf("The iResult is %d\n\n",iResult=a-b-c-d);
	printf("The iResult is %d\n\n",iResult=a-b+c-d);
	printf("The iResult is %d\n\n",iResult=a+b/c/d);
	printf("The iResult is %d\n\n",iResult=a+b/c*d);
	printf("The iResult is %d\n\n",iResult=a/b*c*d);
	printf("The iResult is %d\n\n",iResult=a%b/c*d);
	printf("The iResult is %d\n\n",iResult=a%b%c%d);
	printf("The iResult is %d\n\n",iResult=(a-(b-c))-d);
	printf("The iResult is %d\n\n",iResult=(a-(b-c))-d);
	printf("The iResult is %d\n\n",iResult=a-((b-c)-d));
	printf("The iResult is %d\n\n",iResult=a%(b%c)*d*e);
	printf("The iResult is %d\n\n",iResult=a+(b-c)*d-e);
	printf("The iResult is %d\n\n",iResult=(a+b)*c+d*e);
	printf("The iResult is %d\n\n",iResult=(a+b)*(c/d)%e);
	return 0;
}
