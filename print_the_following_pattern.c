#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);int i,j,count=0,count1=0;
    for(i=1;i<=n;i++){
        int l=i;
        for(j=n;j>i;j--){
           printf(" ");
        }
        for(j=1;j<=i;j++){
            if(j==i){
                printf("%d",count);
            }
            else{
            printf("%d",l-1);
            l--;
            }
        }
        for(j=1;j<i;j++){
            printf("%d",j);
        }
        printf("
");
    }
    return 0;
}
