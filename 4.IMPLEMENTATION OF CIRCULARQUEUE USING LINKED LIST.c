//IMPLEMENTATION OF CIRCULAR QUEUE USING LINKED LIST//

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
if(rear==0)
{
    front=rear=newnode;
    rear->next=front;
}
else
{
    rear->next=newnode;
    rear=newnode;
    rear->next=front;
}
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0&&rear==0)
    {
        printf("Queue is Empty Underflow\n");
    }
    else if(front==rear)
    {   
        front=rear=0;
        printf("\nThe Dequeued element is:%d",temp->data);
        free(temp);
        
    }
    else
    {
        front=front->next;
        rear->next=front;
        printf("\nThe Dequeued element is: %d",temp->data);
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp=front;
    if(front==0&&rear==0)
    {
        printf("Queue is Empty\n");
    }
    else
    {
       printf("\nQueue elements are: \n");
        while(temp->next!=front)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}
void peek()
{
    if(front==0&&rear==0)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("\nThe Peek element is: %d",front->data);
    }
}
int main()
{
    enqueue(12);
    enqueue(10);
    enqueue(1);
    enqueue(13);
    display();
    peek();
    dequeue();
    display();
    dequeue();
    display();
    return 0;
}
