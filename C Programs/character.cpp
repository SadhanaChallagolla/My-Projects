/*Write a program that takes a character as input and prints either 1, 0, or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet */
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c", &ch);
	if(ch >= 65 && ch <= 90)
	{
		printf("1");
	} else if(ch >= 97 && ch <= 122)
	{
		printf("0");
	} else{
		printf("-1");
	}
	return 0;
}
