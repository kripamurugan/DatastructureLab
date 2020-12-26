#include<stdio.h>
int sum(int,int);
int main()
{
int num1,num2,total;
printf("Enter the two number:");
scanf("%d %d",&num1,&num2);
total=sum(num1,num2);
printf("The sum of these numbers :%d",total);
getch();
return 0;
}
int sum(int a,int b)
{
int result=a+b;
return result;
}