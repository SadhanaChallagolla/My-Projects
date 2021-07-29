/*  Print the following pattern
Pattern for N = 4
       1
     23
   345
 4567
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
		int k=1;
		for(j=1; j<=n; j++)
		{
			if(i+j < 4)
			{
				printf(" ");
			}else {
				printf("%d", i+k);
				k=k+1;
			}
		}
		printf("\n");
	}
	return 0;
}
