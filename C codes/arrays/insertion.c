#include<stdio.h>
int main(){
    int i,n,a[10000],count=0;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        }
        int x;
        printf("Enter the element to be inserted:");
        scanf("%d",&x);
        int p;
        printf("Enter the position:");
        scanf("%d",&p);
        n++;
        for(i=n-1;i>=p;i--){
            a[i]=a[i-1];
        }
        a[p-1]=x;
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
        return 0;
}