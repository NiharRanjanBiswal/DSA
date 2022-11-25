//C program to Implement Insertion Sort algorithm//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void insertionsort(int arr[],int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void displayarr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int main()
{
    int arr[]={10,5,7,9,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Elements before Sorting \n");
    displayarr(arr,n);
    insertionsort(arr,n);
    printf("\nElements after Sorting\n");
    displayarr(arr,n);
}
