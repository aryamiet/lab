#include<stdio.h>
void main()
{
    union student
    {
      int rollno;
      char name[50];
      float avg;
    };
    int n,i;
    union student s;
    printf("enter the student rollno\n");
    scanf("%d",&s.rollno);
    printf("student rollno:%d\n",s.rollno);
    printf("enter the student name\n");
    scanf("%s",s.name);
    printf("student name:%s",s.name\n);
    printf("enter the student average\n");
    scanf("%f",&s.avg);
    return 0;
}