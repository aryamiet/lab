#include<stdio.h>
void main()
{
    int arr[50],i,length,max;
    printf("enter the size of array");
    scanf("%d%d",&length,&max);
    printf("enter the value");
    length=sizeof(arr)/sizeof(arr[0]);
    max=arr[0];
    for(i=0;i<=length;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("largest element present in given array=%d\n");
}

