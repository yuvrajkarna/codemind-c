#include<stdio.h>
void swap(int *a,int *b){
    int c=*a;
    *a=*b;*b=c;
}
int main(){
    int n,i;
    scanf("%d ",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        a[i]=a[i]*a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}