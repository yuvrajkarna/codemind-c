#include<stdio.h>
int countdiv(int);
int main(){
    int n,m,i,count=0,a,res;
    scanf("%d",&m);
    int t2=m;
    for(i=1;i<=m;i++){
        res=i;
        a=countdiv(res);
        if(a==9){
            count++;
        }
    }
    printf("
Total=%d",count);
    return 0;
}
int countdiv(int a){
    int j,flag=0;
    for(j=1;j<=a;j++){
        if(a%j==0){
            flag++;
        }
    }
    if(flag==9){
        printf("%d ",a);
    }
    
    return flag;
}