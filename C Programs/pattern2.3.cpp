/*Print the following pattern for the given N number of rows.
Pattern for N = 4
1
22
333
4444
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,j;
	printf("Enter number : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=0;j<i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
