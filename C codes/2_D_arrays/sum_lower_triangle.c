#include <stdio.h>
int main(){
    int n,m,i,j,a[100][100],sum=0;
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
    printf("lower triangular matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i>=j)
        printf("%d\t",a[i][j]);  
        else 
        printf("\t"); 
    }printf("\n");}
    printf("Sum of triangular matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i>=j)
        sum=a[i][j]+sum;
        
    }
    }printf("%d",sum);
    return 0;
}