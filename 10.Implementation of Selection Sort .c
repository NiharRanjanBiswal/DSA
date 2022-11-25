//C Program to Implement Selection Sort Algorithm//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void selectionsort(int arr[],int n)
{
    int i,min,j;
    {
        for(i=0;i<n-1;i++)
        {
            int min=i;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            if(min!=i)
            {
                swap(&arr[i],&arr[min]);
            }
        }
    }
}
    void displayarr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void swap(int *i, int *min)
{
    int temp;
    temp=*i;
    *i=*min;
    *min=temp;
}
int main()
{
    int arr[]={10,5,7,9,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Elements before Sorting \n");
    displayarr(arr,n);
    selectionsort(arr,n);
    printf("\nElements after Sorting\n");
    displayarr(arr,n);
}
