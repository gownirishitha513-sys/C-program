#include<stdio.h>
#include<string.h>
int main(){
int i,j=0;
char str[100],ch;
printf("enter string");
fgets(str,sizeof(str),stdin);
printf("enter character to remove");
scanf("%c",&ch);
for(i=0;str[i]!='\0';i++){
if(str[i]!=ch){
str[j]=str[i];
j++;
}}
str[j]='\0';
printf("string after removing character:%s",str);
return 0;
}
