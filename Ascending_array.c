#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int flag=0;
    for(int i=0;i+1<n;i++){
       
        if(a[i]>=a[i+1]){
            flag=1;
            printf("no");
            break;
        }

    }
    if(flag==0)
    printf("yes");
    
    
    return 0;
}