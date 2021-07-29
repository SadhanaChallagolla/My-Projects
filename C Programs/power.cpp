/* Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1
Sample Input 1 :
 3 4
Sample Output 1 :
81 */
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	double a, b;
	printf("Enter numbers:" );
	scanf("%lf %lf", &a, &b);
	printf("%lf", pow(a,b));
	return 0;
}
