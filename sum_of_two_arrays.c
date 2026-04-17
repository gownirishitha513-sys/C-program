#include<stdio.h>
int main(){
int a[100],b[100],n,i,j,sum[i];
printf("enter no.of elements");
scanf("%d",&n);
printf("enter elements in first array");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter elements of second array");
for(i=0;i<n;i++){
scanf("%d",&b[i]);
}for(i=0;i<n;i++){
sum[i]=a[i]+b[i];
}
printf("sum of arrays:\n");
for(i=0;i<n;i++){
printf("%d ",sum[i]);
}
return 0;
}