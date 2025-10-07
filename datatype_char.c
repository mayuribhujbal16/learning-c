#include<stdio.h>
int main()
{
	/*
	syntax: declaration datatype;
	       datatype varname;
	       char ch1,ch2,ch3;
	       int n1,n2=100(initialization);
	       float x,y;
	*/

char ch1='A' , ch2, ch3;
printf("ch1=%c\n",ch1);
ch2='4';
printf("ch2=%c\n",ch2);
ch3='@';
printf("ch3=%c\n",ch3);

printf("ch2=%c\n",ch3); //here o/p: is ch2=@ 
printf("ch3=%c\n");    // here o/p: garbage (any random value). 
	
	
}
