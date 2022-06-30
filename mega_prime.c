#include<stdio.h>
int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,r,f=0;
    scanf("%d",&n);
    if(isPrime(n)){
        while(n){
            r=n%10;
            n/=10;
            if(isPrime(r)==0){
                printf("Not Mega Prime");
                f=1;
                break;
            }
        }if(f==0)
        printf("Mega Prime");
    }
    else{
        printf("Not Mega Prime");
    }
    return 0;
}