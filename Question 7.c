#include <stdio.h>
#include <limits.h>
#include <conio.h>
int main()
{
	int number,prime=1,t0==;
	printf("Enter a number: \n");
	scanf("%d",&number);
	if (number<=1)
	{
		printf("Not a prime number\n");
	}
	else
	{
		for (int i=2;i<number;i++)
		{
			if (number%i==0)
			{
				prime=0;
			}
		}
		if (prime==0)
		{
			printf("The number is not prime");
		}
		else
		{
			printf("The number is prime: \n");
			
		}
		
	}
	
}