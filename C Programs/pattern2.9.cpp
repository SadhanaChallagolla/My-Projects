/*Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,j;
	printf("Enter number : ");
	scanf("%d", &n);
	for(i=n; i>0; i--)
	{
		for(j=0; j<i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
