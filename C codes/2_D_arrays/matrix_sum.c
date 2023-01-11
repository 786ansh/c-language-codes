#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);int a[n][n];int b[n][n];int c[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("this is the very first matrix\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");}
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                scanf("%d",&b[i][j]);
            }
        }printf("this is the second matrix to be added in first\n");
        for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d",b[i][j]);
        }printf("\n");}
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }printf("the new matrix looks like it \n");
        for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d",c[i][j]);
        }printf("\n");}
}