#include<stdio.h>
int main()
{
	int first,second,*p,*q,sum;
	printf("enter the numbers to be added:\n");
	scanf("%d%d",&first,&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf("sum of the two numbers is %d",sum);
	return 0;
}
