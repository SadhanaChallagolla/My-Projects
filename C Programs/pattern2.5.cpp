/* Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
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
	for(i=1; i<=n; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%c", ch+i-1);
		}
		printf("\n");
	}
	return 0;
}
