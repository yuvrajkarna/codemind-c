#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j==i||j==(n-(i-1))){
                printf("%d ",i);
            }else
            printf(" ");
        }
        printf("
");
    }
    return 0;
}
