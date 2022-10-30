//2.IMPLEMENTATION OF QUEUE USING LINKED LIST//

#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5;
int queue[CAPACITY];
struct node
{
struct node *next;
struct node *front=0, *rear=0;
};
void insert();
void delete();
void traverse();

void main()
{
    int ch;
    while(1)
    {
        printf("Queue Operations: \n");
        printf("1.insert\n");
        printf("2.Delete\n");
        printf("3.Traverse\n");
        printf("4.Quit\n");

        printf("Enter Your choice:\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 :insert();
            break;
            case 2 :Delete();
            break;
            case 3 :Traverse();
            break;
            case 4 :exit(1);

        default:printf("Invalid input by the user \n");
        }

    }
}

void insert()
{
    if(CAPACITY==rear)
    {
        printf("Queue is full\n");

    }
    else
    {
        int element;
        printf("Enetr the element :");
        scanf("%d",&element);
        queue[rear]=element;
        rear++;

    }
}
void Delete()
{
   if(front=rear)
   {
    printf("Queue is empty\n");
   }
   else
   {
    printf("deleted:%d",queue[front]);
    for(i=0;i<rear-1;i++)
    {
        queue[i]=queue[i+1]
    }
    rear--;
   }
}



void traverse()
{
    if(front==rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
       printf("Queue Elements are: ")
       for(i=front;i<rear;i++)
       {
        printf("%d\n",queue[i])
       }
    }
}
