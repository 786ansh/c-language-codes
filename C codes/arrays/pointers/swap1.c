#include <stdio.h>
void swap(int a[],int b[]){
    int n;int c[100];
    printf("Enter no. of elements of 1st array:");
    scanf("%d",&n);
   
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }for(int i=0;i<n;i++){
       
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }printf("First array\n");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
      }
        printf("second array\n");
     for(int i=0;i<n;i++){
        printf("%d",b[i]);
      }
}
int main(){
    int a[100],b[100],c[100],n;
  swap(a,b);
return 0;
}