#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],f=0,c=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
           if(a[i]==a[j]) c++;
        }
        if(c==1){
            f=1;
            printf("%d ",a[i]);
        }
    }
    if(f==0) 
    printf("-1");
    
    return 0;
}