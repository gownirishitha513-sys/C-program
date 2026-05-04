#include<stdio.h>
int main(){
int n,i,arr[100],totalsum=0,leftsum=0;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
totalsum+=arr[i];
}
for(i=0;i<n;i++){
totalsum-=arr[i];
if(leftsum==totalsum){
printf("equilibrium index=%d\n",i);
return 0;
}
leftsum+=arr[i];
}
printf("no equilibrium index");
return 0;
}

    