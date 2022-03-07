#include<stdio.h>
int isprime(int n);
int main(){
    int n,i,res,a,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            res=i;
            a=isprime(res);
            if(a==0){
                count++;
            }
        }
    }
    printf("%d",count+1);
    return 0;
}
int isprime(int n){
    int j,fact=0;
for(j=2;j<n;j++){
    if(n%j==0){
        return 0;
        break;
    }
}
return 1;
   
}