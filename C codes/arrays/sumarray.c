#include<stdio.h>
int main(){
    int n,a[10000],i,sum=0;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
     }
     for(i=0;i<n;i++){
    
        sum=sum+a[i];
     }
      printf("%d",sum);
    return 0;
}