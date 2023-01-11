#include<stdio.h>
int main(){
    int i,n,a[10000],count=0,count1=0;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        count++;
        else count1++;
    }printf("even=%d\nodd=%d",count,count1);

    return 0;
}