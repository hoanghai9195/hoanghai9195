#include<stdio.h>
#include<stdlib.h>
int testPrime(int x);
int main()
{
	int arr[5],i;
	printf("Please enter five number integer:");
	for(i=0;i<5;i++)
	{
		printf("\nPlease enter number %d: ",i + 1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(testPrime(arr[i]) == 1)
		{
			printf("cac so nguyen to lan luot la %d,",arr[i]);
		}
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
