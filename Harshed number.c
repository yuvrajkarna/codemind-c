#include<stdio.h>
int main(){
    int num,sum=0,t,num1;
    scanf("%d",&num);
    num1=num;
    while(num>0){
        t=num%10;
        num=num/10;
        sum=sum+t;
    }
    if(num1%sum==0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}