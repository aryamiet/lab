#include<stdio.h>
int fib(int n){
    if(n<=1)
    return n;
    else
    return fib2(n-1)+fib2(n-2)

}
int fib2(int n)
{                                                                                                                                                                              
    if(n<=1)
    return 1;
    else
     return fib(n-1)+fib(n-2);
}
void fib1(int n,int i)
{
    if(i<n)
    {
        printf("%d",fib1(i));
        fib1(n,i+1);
    }
}
int main()
{
    int n;
    printf("enter the number of terms");
    scanf("%d\n",&n);
    printf("fibonacci sequence");
    fib1(n,0);
    return 0;
}