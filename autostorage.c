#include<stdio.h>
void fun();
 int a=55;
void main()
{
   int a=10;

{ int a=20;


    printf("%d\n",a);
}
fun();
//printf("%d\n",a);
printf("%d\n",a);
fun();
printf("hello welcome  to college");
fun();

}
void fun()
{
    static int a=30,b;
    a=--b;
    
    printf("coming from fun b=%d\n",b);
}