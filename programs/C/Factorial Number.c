#include <stdio.h>
main()
{
	int factorial,i,result = 1;
	printf("Enter number:  ");
	scanf("%d",&factorial);
	for(i=1;i<=factorial;i++)
	{
		result *= i ;
	}
	printf("Factorial of %d = %d",factorial,result);
}
