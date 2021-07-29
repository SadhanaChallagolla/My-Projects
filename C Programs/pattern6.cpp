/* Print the following pattern
Pattern for N = 4
...*
..***
.*****
*******
The dots represent spaces.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,j;
	printf("Enter number : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		int k=0;
		for(j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		while(k != 2*i-1)
		{
			printf("*");
			k++;
		}
		printf("\n");
	}
	return 0;
}
