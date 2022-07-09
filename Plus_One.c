#include<stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int num=0,r;
    for(int i=0;i<n;i++){
        num=num*10+a[i];
    }
    num=num+1;
    int arr[n+1],k=0;
    while(num){
        r=num%10;
        arr[k++]=r;
        num/=10;
    }
    for(int i=k-1;i>=0;i--){
        printf("%d ",arr[i]);
    } return 0;
}