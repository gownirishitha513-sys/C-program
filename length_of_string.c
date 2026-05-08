#include<stdio.h>
int main(){
int i, length=0;
char str[100];
printf("enter string");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!=0;i++){
length++;
}
if(str[length-1]=='\n'){
length--;
}
printf("length of string=%d",length);
return 0;
}


    