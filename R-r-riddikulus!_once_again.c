#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=k;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int j=0;j<k;j++){
        printf("%d ",a[j]);
    }
    return 0;
}