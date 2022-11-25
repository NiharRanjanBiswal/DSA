/*NARESH IT C || DSA || STACK IMPLEMENTATION USING STATIC ARRAY*/
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5 //Pre-Processor Macro
int stack[CAPACITY],top=-1;
void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);
void traverse(void);
void peek(void);
int main()
{
int ch;
int item;
while(1)
{
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Peek\n");
printf("4.Traverse\n");
printf("5.Quit\n");
printf("Enter Your Choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1: printf("Enter Element to Push:\n");
        scanf("%d",&item);
        push(item);
        break;
case 2: item=pop();
        if(item==0)
        {
        printf("Stack Underflow\n");
        }
        else
        {
        printf("Popped item:%d\n",item);
        }
                break;
case 3: peek();
        break;
case 4: traverse();
        break;
case 5: exit(0);
default: printf("Invalid input\n");
}
}
}
void push(int ele)
{
if(isFull())
{
printf("Stack is Full\n");
}
else
{
top++;
stack[top]=ele;
printf("%d pushed \n",ele);
}
}
int (isFull())
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
printf("Stack is Underflow\n");
}
else
{
return (stack[top--]);
}
}
int (isEmpty())
{
if(top==-1)
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
printf("Stack is Empty\n");
}
else
{
printf("Peek Element is :%d\n",stack[top]);
}
}
void traverse()
{
if(isEmpty())
{
printf("Stack is Empty\n");
}
else
{
int i;
printf("Stack Elements: \n");
}
for(int i=0;i<=top;i++)
{
printf("%d\n",stack[i]);
}
}
