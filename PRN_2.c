#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Printing of prn using  function
void prn();
int main() 
{
	printf("Enter your PRN:\n");
	prn();

	return 0;
}
void prn()
{
	long long p[11];
	scanf("%s",&p);
	printf("Your PRN is:\n");
	puts(p);
	return 0;
}
