//IMPLEMENTATION OF BINARY TREE//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* create()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter Data(-1 for no node):");
scanf("%d",&x);
if(x==-1)
{
    return 0;
}

    newnode->data=x;
    printf("Enter left child of %d:\n",x);
    newnode->left=create();
    //different copy of all the local variables will be created for each function call//
    printf("Enter Right child of %d:\n",x);
    newnode->right=create();
    return newnode;
}
int main()
{
    struct node *root;
    root=0;
    root=create();
}


//TO VERIFY USE TRAVERSAL METHORDS//
