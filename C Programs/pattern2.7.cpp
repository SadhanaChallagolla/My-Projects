/* Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,j;
	char ch;
	printf("Enter number : ");
	scanf("%d", &n);
	ch = 65;
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%c", ch+n-j-1);
		}
		printf("\n");
	}
	return 0;
}
