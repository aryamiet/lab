#include<stdio.h>
void main()
{
    int a=38,b=35,c=65;
    printf("AND gate=%d\n",(a&b));
    printf("OR gate=%d\n",(a|b));
    printf("XOR gate=%d\n",(~a));
    printf("Left shift=%d\n",(c<<2));
    printf("Right shift=%d\n",(c>>2));


}
