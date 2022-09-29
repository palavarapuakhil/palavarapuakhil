#include<stdio.h>
int main()
{
	int i, j, rows, colums;
	printf("please enter the number of rows:\n");
	scanf("%d",&colums);
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colums;j++)
	{
		if(i==0||i==rows-1||j==0||j==colums-1)
		{
			printf("*");
			
		}
		else
		{
			printf(" ");
			
				}
				print("\n");		
	}
}
	return 0;
}
