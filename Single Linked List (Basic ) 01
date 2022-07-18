//Program implementation single linked lists operations//

#include<stdio.h>
#include<stdlib.h>

struct node //globally
{
 int data;
 struct node* link;
}; 
 struct node* root=NULL; //global variable
 int len;
 
void append (void);
void addatbegin (void);
void addatafter (void);
int length (void);
void display (void);
void delete (void);
 
void main()
{
    int ch; //local variable
   while(1)
   {
      printf("single linked list operations \n");
      printf("1.append\n");
      printf("2.addatbegin \n");
      printf("3.addatafter \n");
      printf("4.length\n");
      printf("5.display\n");
      printf("6.delete\n");
      printf("7.quit\n");
      
      printf("Enter your choice : ");
      scanf("%d",&ch);
      
      //depending on the choice we need switch case//
      
      switch(ch)
      {
          case 1 : append();
                  break;
                  
          case 2 : addatbegin();
                  break;
                  
          case 3 : addatafter();
                  break;
                  
          case 4 : len=length();
          printf("Length : %d\n\n",len);
                  break;
          
          case 5: display();
                  break;
                  
          case 6: delete();
                  break;
        
          case 7:exit(1);
          
         default: printf("Invalid input \n\n");//other than 7 cases
                   
      }
      
   } 
}

void append()
{
    struct node* temp;
   temp =(struct node*)malloc(sizeof(struct node));
   printf("Enter node data : ");
   scanf("%d",&temp->data);
   temp->link=NULL;
   
   if(root==NULL) //list is empty//
   {
       root=temp;
   }
   else
   {
    struct node* p;
    p= root;
    while(p->link!= NULL)
    {
      p = p->link;
    }
    p->link=temp;
    }   
 }
 
 int length()
 {
     int count=0;
     struct node* temp;
     temp=root;
     while(temp !=NULL)
     {
         count++;
         temp=temp->link;
     }
     return count;
 }
 
 void display()
 {
     struct node* temp;
     temp=root;
     
     if(temp==NULL)
     {
         printf("List is empty\n");
         
     }
     else
     {
         while(temp !=NULL)
         {
            printf("%d-->",temp->data);
            temp=temp->link;
         }
         printf("\n\n");
     }
 }
 
void addatbegin (void)
{

}
void addatafter(void)
{
    
}

void delete(void)
{
    
}
   
  

