/*
Student Name:Diwakar kandel
Subject:programmming fundamental
program:WAP to swap two Number
Roll No:
Date:18oct,2016
*/

#include<stdio.h>
int main()
{
  int a,b,temp;
  
  printf("Enter the first number:\n");
  scanf("%d",&a);
  printf("Enter the second number:\n");
  scanf("%d",&b);
  
  printf("\n before swap of a is %d",a);
  printf("\n before swap of b is %d",b);
  
  temp=a;
  a=b;
  b=temp;
  
  printf("\n after swap of a is %d",a);
  printf("\n after swap of b is %d",b);
  
return 0;
}
