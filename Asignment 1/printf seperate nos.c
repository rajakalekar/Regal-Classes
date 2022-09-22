#include<stdio.h>
int main()
{
	 int  a, b ;
	 printf("enter a 4 digit number\n") ;
	 scanf("%d",&a);
	 
	 b = a % 10;
	 printf("%d\t",b);
	  a = a / 10;
	 b = a % 10;
	 printf("%d\t",b);
	 
	 a = a / 10 ;
	 b = a % 10 ;
	 printf("%d",b);
	 
	  a = a / 10 ;
	 b = a % 10 ;
	 printf("%d",b);
	
	 
		return 0 ;
}
