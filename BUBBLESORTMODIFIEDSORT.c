//ALGORITHM FOR BUBBLE SORT INTERMEDIATE  MODIFIED SORT//
#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,temp;
   for(i=0;i<n-1;i++)
{
      for(j=0;j<n-1-i;j++)
      {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
   
      }
}
}
void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int data[]={-2,34,22,65,33,12,11,3};
    int size=(sizeof data)/sizeof(data[0]);
    bubblesort(data,size);
    printf("Sorted array in Ascending Order:\n");
    display(data,size);
}
