/* Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.

Sample Input 1 :
10000 A
Sample Output 1 :
17600
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float basic, hra, da, allow, pf, total;
	char g;
	printf("Enter salary : ");
	scanf("%f", &basic);
	printf("Enter grade: ");
	scanf("%c", &g);
	hra = 0.2 * basic;
	da = 0.5 * basic;
	if(g == 'A')
	{
		allow = 1700;
	} else if(g == 'B')
	{
		allow = 1500;
	}else {
		allow = 1300;
	}
	pf = 0.11 * basic;
	total = basic + hra + da + allow -pf;
	printf("%f", total);
	return 0;
}
