#include<stdio.h>

int main(){
    int o,p;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&o,&p);
    if(o!=p){
        printf("Invalid order of the matrix it should be symmetric");
        return 0;
    }
    int n[o][p];
    int i,j,t=0;
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("Enter the number to create matrix: ");
            scanf("%d",&n[i][j]);
        }
    }

    printf("Original matrix is: \n");

    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<o;i++){
        for(j=i+1;j<p;j++){
            if(n[i][j]!=n[j][i]){
                printf("Matrix isn't symmetric");
                return 0;
            }
        }
    }
    printf("Matrix is symmetric");   
    return 0;
}