#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4,aggregate_marks;
    float percentage_marks;
    printf("Enter the marks of sub1: ");
    printf("\nEnter the marks of sub2: ");
    printf("\nEnter the marks of sub3: ");
    printf("\nEnter the marks of sub4: ");
    scanf("%d%d%d%d",&sub1, &sub2, &sub3, &sub4);
    aggregate_marks = sub1+sub2+sub3+sub4;
    printf("Aggregate marks is: %d",aggregate_marks);
    percentage_marks = (aggregate_marks/400)*100;
    printf("\nPercentage marks is: %f\n",percentage_marks);
    return 0;
}
