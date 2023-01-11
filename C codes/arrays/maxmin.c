#include<stdio.h>
int main(){
    int i,n,a[10000];
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
}
int max=a[0];
for(i=0;i<n;i++){
if(max<a[i])
max=a[i];
}printf("max=%d\n",max);
int min=a[0];
for(i=0;i<n;i++){
if(min>a[i])
min=a[i];
}printf("min=%d\n",min);
return 0;
}