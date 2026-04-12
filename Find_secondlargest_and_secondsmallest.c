#include<stdio.h>
int main() {
int arr[100],n,i;
int largest,secondLargest;
int smallest,secondSmallest;
printf("enter number of elements");
scanf("%d",&n);
printf("enter  %d elements:\n",n);
for(i = 0; i < n; i++) {
scanf("%d",&arr[i]);
}
largest=secondLargest=arr[0];
smallest=secondSmallest=arr[0];
for(i=0;i<n;i++){
if(arr[i]>largest){
secondLargest=largest;
largest=arr[i];
}
else if(arr[i] > secondLargest && arr[i] != largest){
secondLargest=arr[i];
}
if(arr[i]<smallest){
secondSmallest=smallest;
smallest=arr[i];
}
else if(arr[i]<secondSmallest && arr[i] != smallest ){
secondSmallest=arr[i];
}
}
printf("secondlargest=%d\n", secondLargest);
printf("secondsmallest=%d\n",secondSmallest);
return 0;
}
