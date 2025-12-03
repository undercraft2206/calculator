#include <stdio.h>
int main()
 {
int val01, val02, dividend, end;

		printf("calculator 2000\n");

		printf("first value:\n ");
		scanf("%d", &val01);

		printf("second value:\n ");
		scanf("%d", &val02);

		printf("dividend (+:1 -:2 /:3):\n ");
		scanf("%d", &dividend);

if(dividend == 1) 
{
	end = val01+val02;
	printf("\nthe result is %d\n", end);
}		

if(dividend == 2)
{
	end = val01-val02;
	printf("\nthe result is %d\n", end);
} 

if(dividend == 3)
{
	end = val01/val02;
	printf("\nthe result is: %d\n", end);
}

 return 0;
 }
