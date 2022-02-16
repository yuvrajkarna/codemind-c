#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
           printf(" ");
        }
        for(j=1;j<2*i;j++){
            printf("%d",i);
        }
        printf("
");
    }
    return 0;
}
