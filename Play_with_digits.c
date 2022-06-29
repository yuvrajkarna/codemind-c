#include<stdio.h>
int sum1(int n){
    if(n<10){
        return n;
    }
    int r,sum=0;
    while(n){
        r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    sum+=sum1(a[i]);
    
    printf("%d",sum);
    
    return 0;
    
}