#include<stdio.h>
int main(){
    int num; int t=0; int t3=1; int t1=0,t2,a,b=1;
    scanf("%d",&num);
    while(num>0){
    a=t=num%10;
    num/=10;
    t=t+t1;
    t1=t;
    b=t3*a;
    t3=b;
    }
    if(t3==t1)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    
    return 0;
    
}