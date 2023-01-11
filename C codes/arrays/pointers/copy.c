#include<stdio.h>
int main(){
    int a[100],b[100],n,*p,*q;
    scanf("%d",&n);
    p=&a[0];
    q=&b[0];
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    q=p;
    for(int i=0;i<n;i++){
    printf("%d ",*(q+i));
    }
    return 0;
}