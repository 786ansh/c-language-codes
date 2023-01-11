#include<stdio.h>
int main(){
    int i,n,a[10000],count=0;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i])
        count++;
    }
        scanf("%d",&a);
     while(n!=0)
    {
int rem,digit;
       rem=n%10;

       if(rem==digit)
        
       count++;
       
       n=n/10;
    }
        printf("%d",count);
return 0;
}