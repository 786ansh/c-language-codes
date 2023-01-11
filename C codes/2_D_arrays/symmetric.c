#include <stdio.h>
int main(){
    int n,m,i,j,a[100][100],t[100][100],flag=1;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    printf("Enter the no. of columns:");
    scanf("%d",&m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);   
        printf("%d\t",a[i][j]);   
    
    }printf("\n");
    }
   printf("Transpose is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           t[j][i]=a[i][j];
       
    }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           
        printf("%d\t",t[i][j]);
    }printf("\n");
    }for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           if(a[i][j]!=t[i][j]){
       flag=0;
       break;}
    }
    }
    if(flag==1)
    printf("symmetric\n");
    else 
    printf("not symmetric");
    return 0;
}