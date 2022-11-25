//JENNY LECTURE STACK IMPLEMENTATION USING LINKED LISTS (WITHOUT SWITCH CASE)//
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=0;
void push(int x)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=top;
top=newnode;
printf("%d is Pushed into Stack\n",top->data);
}
void display()
{
struct node *temp;
temp=top;
if(top==0)
{
printf("Stack is Underflow\n");
}
else
{
printf("The Elements of Stack are: ");
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
void peek()
{
if(top==0)
{
printf("The Peek Elements is:%d\n",top->data);
}
}
void pop()
{
struct node *temp;
temp=top;
if(top==0)
{
printf("Stack Underflow");
}
else
{
printf("\nThe Popped Item is:%d\n",top->data);
top=temp->next;
free(temp);
}
}
int main()
{
push(60);
push(50);
push(40);
push(30);
push(20);
push(10);
pop();
peek();
display();
}
