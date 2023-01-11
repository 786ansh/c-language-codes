#include<stdio.h>
int main(){
    int i,n,a[10000];
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<0)
        printf("%d",a[i]);
    }return 0;
}