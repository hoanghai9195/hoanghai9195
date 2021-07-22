#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int testPrime(int x);
int main()
{
	int x;
	printf("Please enter one number:");
	scanf("%d",&x);
	if(testPrime(x) == 0)
	{
		printf("\n%d is not Prime number!",x);		
	}
	else
	{
		printf("\n%d is Prime number!",x);
	}
}
int testPrime(int x)
{
	int i,j;
	if(x>1)
	{
		for(i=2;i<=x-1;i++)
		{
			if(x%i == 0)
			{
				j=0;
				break;
				
			}
			else
			{
				j=1;
			}			
		}
	}
	else
	{
		j=0;
	}
	return (j);
}
