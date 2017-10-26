#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[20],i,j,n,temp;
    printf("\n Enter the size of array ");
    scanf("%d",&n);
    printf("\n Enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n Elements of the array after implementing bubble sort are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}
