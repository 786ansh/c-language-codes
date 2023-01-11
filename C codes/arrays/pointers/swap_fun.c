#include <stdio.h>
void swap(){
    int a[100],b[100],n,c[100];
    int *p,*q,*temp;
    p=&a[0];
    q=&b[0];
    temp=c[0];
    printf("Enter no. of elements of 1st array:");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
        
    }for(int i=0;i<n;i++){
       
        scanf("%d",(q+i));
    }
    for(int i=0;i<n;i++){
       temp=p;
       p=q;
       q=temp;
    }printf("First array\n");
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
      }
        printf("\nsecond array\n");
     for(int i=0;i<n;i++){
        printf("%d",*(q+i));
      }
}
int main(){
  swap();
return 0;
}