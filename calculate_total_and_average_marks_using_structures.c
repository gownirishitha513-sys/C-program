#include<stdio.h>
struct student{
 char name[50];
 int marks1,marks2,marks3;
 int total;
 float average;
 };
 int main(){
 struct student s;
 printf("enter student name");
 scanf("%s", s.name);
 printf("enter 3 subjects marks");
 scanf("%d%d%d", &s.marks1,&s.marks2,&s.marks3);
 s.total=s.marks1+s.marks2+s.marks3;
 s.average=s.total/3;
 printf("\n student name:%s",s.name);
 printf("\n student  total marks:%d",s.total );
 printf("\n student average:%2f",s.average);
 return 0;
 }
 
 