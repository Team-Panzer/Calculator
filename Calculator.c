#include <stdio.h>
int main()
{
	printf("Enter Two numbers\n");
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int sum,prod,div,mod;
	sum=a+b;
	prod=a*b;
	div=a/b;
	// Saayan do product here
	// Shrivas do division here
	// Sayantan do modulus or remainder here
	mod=a%b;
	printf("\nPRODUCT=%d\n",prod);
	printf("\nREMAINDER=%d\n",mod);
	printf("\nSUM=%d\n",sum);
	printf("\nQUOTIENT=%d\n",div);
}
	
