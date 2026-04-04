#include<stdio.h>
int main(){
int num,rows,i,j;
printf("enter number of rows");
scanf("%d",&rows);
for(i=0;i<rows;i++){
num=1;
for(j=0;j<=i;j++){
printf("% d" , num);
num=num*(i-j)/(j+1);
}
printf("\n");
}
return 0;
}
    