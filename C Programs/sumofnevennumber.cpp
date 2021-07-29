/*  Given a number N, print sum of all even numbers from 1 to N. */
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, s=0;
	printf("Enter number : ");
	scanf("%d", &n);
	if(n%2 == 0)
	{
		s = s+ n;
	}
	
	printf("SUM = %d", s);
	return 0;
}
