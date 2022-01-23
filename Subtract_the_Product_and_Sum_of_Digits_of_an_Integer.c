#include<stdio.h>
int main(){
    int num;int sum=0,mul=1,result,a;
    scanf("%d",&num);
    while(num>0){
        a=num%10;
        sum=sum+a;
        mul=mul*a;
        num/=10;
    }
    result=mul-sum;
    printf("%d",result);
    return 0;
}