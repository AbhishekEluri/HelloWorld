#include<stdio.h>
void swap(int num1,num2);
main()
{
int num1,num2;
printf("enter values for num1,num2");
scanf("%d,%d",&num1,&num2);
swap(num1,num2);
}
void swap(int num1,num2)
{
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("values after swappinng num1:%d, num2:%d",num1,num2);
}