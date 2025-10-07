// datatype: Float
/*
  used to store real numbers.
  fromat specifier is %f.
  it'll took 6 precesions after the decimal point. 

*/
#include<stdio.h>
int main()
{
	
	char ch1='a';
	int n1=10;
	float x=1.56;
	printf("ch1=%c\n n1=%d \n x= %f",ch1,n1,x);
	printf("\n**********\n");
	printf("bytes:%d",sizeof(x));
	
  // ***** float Datatype *****
	/*
	   float rate=16.04;
	   printf("Rate=%f",rate);
	*/
	
/*	float rate=16.4891;
	printf("Rate=%.0f",rate);   // o/p: 16
	*/
	
	/*
	float rate=16.489;
	   printf("Rate=%.2f",rate);  // o/p: 16.49
	*/
}
