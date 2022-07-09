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
    
    int c,val=0,f=0;
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
            c++;
        }
        if(c==1){
            f=1;
            if(val<a[i])
            val=a[i];
        }
    }
    if(f==1)
    printf("%d ",val);
    else
    printf("-1");
        
  
    return 0;
}