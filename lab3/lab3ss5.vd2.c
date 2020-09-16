#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main() {
	int a ,b ,c ,d;
	a = 50;
	b = 24;
	c = 68;
	
	d = a * b * c;
	printf("\n The value after a * b *c = %d", d);
	d = a%b;
	printf("\n The value after a mob b is = %d", d);
	d = a * b - c;
	printf("\n The value after a*b-c = %d", d);
	 d = a/b+c;
   printf("\n The value after a/b+c is : %d", d);
   d = a+b*c;
   printf("\n The value after a+b*c is : %d", d);
   d = (a+b)*c;
   printf("\n The value after (a+b)*c is : %d", d);
   d = a*(b+c+(a-c)*b);
   printf("\n The value after a*(b+c+(a-c)*b) is : %d", d);
	
	
	return 0;
}
