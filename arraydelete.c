 #include<stdio.h>
 void main()
 {
    int arr[30],i,num,loc;
    printf("enter the size of the array");
    scanf("%d",&num);
    printf("enter the value",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the location to delete=");
    scanf("%d",&loc);
    while(loc<num)
    {
        arr[loc-1]=arr[loc];
        loc++;
    }
    num--;
    for(i=0;i<num;i++)
    {
        printf("value=%d\n",arr[i]);
    }
 }       