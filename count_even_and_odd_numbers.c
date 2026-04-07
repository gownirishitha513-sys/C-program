#include<stdio.h>
int main(){
int arr[100],n,i,even=0,odd=0;
printf("enter number");
scanf("%d",&n);
printf("enter elements:\n",n);
for(i = 0; i < n; i++){
scanf("%d", &arr[i]);}
for(i=0;i<n;i++){
if(arr[i]%2==0)
even++;
else
odd++;
}

printf("even numbers count=%d\n",even);
printf("odd numbers count=%d\n",odd);
return 0;
}