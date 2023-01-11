#include <stdio.h>
int main(){
    int n,m,i,j,a[100][100],b[100][100],c[100][100],flag=1;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    printf("Enter the no. of columns:");
    scanf("%d",&m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);   
    }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(a[i][j]!=b[i][j])
           flag=0;
        }
    }if (flag==1)
    printf("Equal");
    else printf("Not equal");
    return 0;
}