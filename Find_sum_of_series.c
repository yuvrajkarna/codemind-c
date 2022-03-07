#include<stdio.h>
int main(){
    int n,i;scanf("%d",&n);
    float sum=0;
    for(i=1;i<=n;i++){
        sum=sum+(1.0/i);
    }
    printf("%.2f",sum);
    return 0;
}