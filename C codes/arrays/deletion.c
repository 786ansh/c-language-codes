#include<stdio.h>
int main(){
    int i,n,a[10000],count=0;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        }
        int p;
        printf("Enter the position:");
        scanf("%d",&p);
        n--;
        for(i=p-1;i<n;i++){
            a[i]=a[i+1];
        }
        
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
        return 0;
}