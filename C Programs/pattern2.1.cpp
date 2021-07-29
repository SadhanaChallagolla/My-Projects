/* Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,j;
	printf("Enter number : ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d", n);
		}
		printf("\n");
	}
	return 0;
}
