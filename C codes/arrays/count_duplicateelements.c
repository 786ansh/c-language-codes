#include<stdio.h>
int main(){
int a[1000],n,i,count=0;
printf("Enter no. of elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}for(i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    if(a[i]==a[j]){
    count++;
    break;}
}
}
printf("Duplicate elements are %d\n",count);
return 0;
}