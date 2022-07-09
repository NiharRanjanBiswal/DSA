//Stack implementation using static arrays//

#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5 //Pre-processor macro
int stack[CAPACITY], top=-1;
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void Peek(void);
void main()
{
    int ch;
    int item;
    while(1)
    {
    printf("1.Push \n");
    printf("2.Pop \n");
    printf("3.Peek \n");
    printf("4.Traverse \n");
    printf("5.Quit \n");
    
    printf("Enter your choice : ");
    scanf("%d", &ch);
    
    switch(ch)
    {
        case 1 : printf("Enter element to push : ");
                 scanf("%d",&item);
                 push(item);
                 break;
                 
        case 2 : item = pop();
        if(item==0)
        {
            printf("stack is underflow\n");
        }
        else
        {
            printf("Popped item is : %d \n",item);
        }
                break;
                
        case 3 : peek();
                 break;
        
        case 4 : traverse();
                 break;
                 
        case 5 : exit(0);
        default: printf("Invalid input ERROR\n\n");
        
    }
    
    }
    
}

void push(int element)
{
  if(isFull())
  {
    printf("STACK IS OVERFLOW \n");
  }
  else
  {
      top++;
      stack[top]=element;
      printf("%d Pushed into stack",element);
  }
  
}
int isFull()
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }    
}

isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void peek()
{
    if(isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("peek element is :%d \n",stack[top]);
    }
    
}

void traverse()
{
    if(isEmpty())
    {
        printf("Stack is empty \n");
    }
    else
    {
        int i;
        printf("Stack elements are : \n");
        for(i=0;i<=top;i++)
        {
            printf("%d \n ",stack[i]);
        }
    }
}
