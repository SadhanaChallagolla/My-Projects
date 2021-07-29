/*Print the following pattern for the given N number of rows.
Pattern for N = 4
   1
  12
 123
 1234

*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,j, k;
	printf("Enter number : ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		k=0;
		for(j=1; j<=n; j++)
		{
			if(i+j >= 4)
			{
				printf("%d", k+1);
				k++;
			}
		}
		printf("\n");
	}
	return 0;
}
