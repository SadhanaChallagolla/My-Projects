/*  Print the following pattern by taking input as N
if n=4
1
23
345
4567 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,j;
	printf("Enter the number : ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		for(j=1; j<=i+1; j++)
		{
			printf("%d",i+j);
		}
		printf("\n");
	}
	return 0;
}
