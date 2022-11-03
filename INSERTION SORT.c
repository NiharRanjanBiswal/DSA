//INSERTION SORT ALGORITHM//
#include<stdio.h>
void insertionsort(int a[],int n)
{
     int i,j,temp;
for(i=1;i<n;i++)
{
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
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
    insertionsort(data,size);
    printf("Sorted array in Ascending Order:\n");
    display(data,size);
}
