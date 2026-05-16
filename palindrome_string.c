#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,length,flag=0;
printf("enter string");
scanf("%s",str);
length=strlen(str);
for (i=0; i<length/2; i++){
if(str[i]!=str[length-i-1]){
flag=1;
break;} 
}
if(flag==0){
printf("string is palindrome");}
else{
printf("string is not palindrome");}
return 0;
}