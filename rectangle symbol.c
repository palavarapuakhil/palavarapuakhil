#include<stdio.h>
int main()
{
	int col,row,i,j;
	printf("enter rows and colums of the rectangle\n");
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++);
	{
	  for(j=0;j<col;j++)
	 { 
	    printf("*");
	}
	   printf("\n");
	   }
	return 0;
}
