#include<stdio.h>
#include<math.h>

int fac(int p){
    int i,sum=0;
    for(i=1;i<p;i++){
        if(p%i==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int d=fac(n);
    if(n==d){
        printf("True");
    }
    else
    printf("False");
    return 0;
}