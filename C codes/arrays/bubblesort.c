#include<stdio.h>
int main(){
    int i,n,a[10000],temp;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(a[i]>a[i+1])
           { temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;}
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }return 0;
}
