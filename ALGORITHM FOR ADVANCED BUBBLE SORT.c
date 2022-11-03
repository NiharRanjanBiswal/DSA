//ALGORITHM FOR ADVANCED BUBBLE SORT//

#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,temp,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int data[]={2,4,23,1,-8,-5,0};
    int size=(sizeof data)/sizeof(data[0]);
    bubblesort(data,size);
    printf("Sorted array in ascending order is: \n");
    display(data,size);
    return 0;
}
