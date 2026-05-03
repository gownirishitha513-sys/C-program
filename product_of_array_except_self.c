#include<stdio.h>
int main(){
int arr[100],n,i;
int prefix[100],suffix[100],result[100];
printf("enter number of elements");
scanf("%d", &n);
printf("enter elements ");
for(i=0;i<n;i++){
scanf("%d", &arr[i]);}
prefix[0]=1;
for(i=1;i<n;i++){
prefix[i]=prefix[i-1]*arr[i-1];
}
suffix[n-1]=1;
for(i=n-2;i>=0;i--){
suffix[i]=suffix[i+1]*arr[i+1];
}
for(i=0;i<n;i++){
result[i]=prefix[i]*suffix[i];
}
printf("product of array except self:\n");
for(i=0;i<n;i++){
printf("%d ", result[i]);
}
return 0;
}


