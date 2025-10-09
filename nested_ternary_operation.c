// neated ternary 

#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("Enter number num1: ");
	scanf("%d",&num1);
	
	printf("Enter number num2: ");
	scanf("%d",&num2);
	
	printf("Enter number num3: ");
	scanf("%d",&num3);
	
	max = (num1>num2)?(num1>num3?num1 : num3) : (num2>num3? num2:num3);
	printf("\n max of 3 number %d",max);
	
	
}
