#include <stdio.h>
int main()
 {
int val01, val02, operator, end;

		printf("calculator 2000\n");

		printf("first value:\n ");
		scanf("%d", &val01);

		printf("second value:\n ");
		scanf("%d", &val02);

		printf("dividend (+:1 -:2 /:3):\n ");
		scanf("%d", &operator);

if(operator == 1) 
{
	end = val01+val02;
	printf("\nthe result is %d\n", end);
}		

if(operator == 2)
{
	end = val01-val02;
	printf("\nthe result is %d\n", end);
} 

if(operator == 3)
{
	end = val01/val02;
	printf("\nthe result is: %d\n", end);
}

 return 0;
 }
