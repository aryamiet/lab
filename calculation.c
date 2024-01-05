#include<stdio.h>
void main()
{
    int add(int,int);
    int sub();
    void mul(int,int);//with argument,without return
    void div();
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum=%d\n",c);
    c=sub();
    printf("subtract=%d\n",c);
    mul(a,b);
    div();
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub()
{
    int x,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    int z=x-y;
    return z;
}
void mul(int x,int y)
{
    int z=x*y;
    printf("mul=%d\n",z);
}
void div()
{
    int x,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    if(y!=0)
    {
        int z=x/y;
        printf("div=%d",z);

    }
    else
    printf("infinite");
}
