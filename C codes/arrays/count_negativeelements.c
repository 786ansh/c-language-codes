#include<stdio.h>
int main(){
    int i,n,a[10000],count=0;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        count++;
    }printf("negative elements=%d\n",count);

    return 0;
}