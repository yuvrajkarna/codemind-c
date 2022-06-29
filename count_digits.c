#include<stdio.h>
int dig(int n){
    if (n==0) return 1;
    int c=0;
    while(n){
        c++;
         n/=10;
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        printf("%d ",dig(a[i]));
    }
    return 0;
}