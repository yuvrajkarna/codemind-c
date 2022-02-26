#include<stdio.h>
int palin(int);
int main(){
    int num,rem,rem1,temp,a;
    scanf("%d",&num);
    int i;
    for(i=1;i<=num;i++){
        scanf("%d",&a);
        temp=palin(a);
        if(temp==a){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
    return 0;
}
int palin(int num){
    int rem1=0,rem;
     while(num>0){
    rem=num%10;
    rem1=(rem1*10)+rem; 
    num=num/10;
    }
    return rem1;
}
