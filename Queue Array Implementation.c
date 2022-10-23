#include<stdio.h>
#include<stdlib.h>
using namespace std;

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Queue is Full\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1&&rear==1)
    {
        printf("Queue is Empty\n");
    }
    else if(rear==front)
    {
        printf("The Dequeued elemnet is : %d\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("The Dequeued elemnet is : %d\n",queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue Elements are: \n");
        for(i=front;i<rear+1;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}

void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue Peek element is :%d\n",queue[front]);
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    display();
    peek();
    return 0;
}
