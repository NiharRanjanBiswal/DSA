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
    printf("\nPre-Order is:");
    preorder(root);
    printf("\nIn-Order is:");
    inorder(root);
    printf("\nPost-Order is:");
    postorder(root);
}
void preorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}


//TO VERIFY USE TRAVERSAL METHORDS//
