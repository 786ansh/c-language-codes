#include <stdio.h>
int main(){
    int n,m,i,a[1000],b[1000],c[1000],k;
    printf("Enter size of first array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }k=i;
    printf("Enter the size of second array:");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    for(i=0;i<k;i++){
        printf("%d",c[i]);
    }
    return 0;
}