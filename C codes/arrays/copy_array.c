#include<stdio.h>
int main(){
    int i,n,a[10000],b[10000];
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++){
    b[i]=a[i];
}
for(i=0;i<n;i++){
    printf("%d",b[i]);
}
    return 0;
}