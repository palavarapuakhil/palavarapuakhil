#include <stdio.h>
 
#define MAX 50
 

void delete();

int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
       
        printf("2.Delete element from queue \n");
    
        
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
          
            case 2: 
            delete();
            break;
            
            default:
            printf("Wrong choice \n"); 
        } 
    } 
}
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front +  
        
      
