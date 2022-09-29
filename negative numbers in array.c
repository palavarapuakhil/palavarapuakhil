#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
    int arr[MAX_SIZE];
    int i, N;
    printf("Enter size of the array : ");
    scanf("%d", &N);

    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            #include <stdio.h>
 
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int sum=0;
    int *ptr=&arr[0];
    for(int i=0;i<size;i++)
    {
        sum+=*ptr;
        ptr++;
    }
    printf("Sum of the array is: %d",sum);
 
    return 0;
}
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are : ");
    for(i=0; i<N; i++)
    {

        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
