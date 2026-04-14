 #include<stdio.h>
int main() {
int arr[100],n,i,pos;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements ");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
printf("enter position to delete(1 to %d):",n+1);
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++){
arr[i]=arr[i+1];
}
n--;
printf("after deletion:\n");
for(i=0;i<n;i++){
printf("%d ", arr[i]);
}
return 0;
}