#include<stdio.h>
int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,t,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(isPrime(a[i])){
            
            if(a[i]>=key)
            c++;
        }
    }
    printf("%d",c);
    return 0;
}