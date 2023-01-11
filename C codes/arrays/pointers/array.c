#include<stdio.h>
int main(){
    int a[100],n,*p;
    scanf("%d",&n);
    p=&a[0];
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
        
    } for(int i=0;i<n;i++){
        printf("%d",*(p+i));
       
    }
    return 0;
}