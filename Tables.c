#include<stdio.h>
int main(){
    int num,i,dig;
    scanf("%d %d",&num,&dig);
    for(i=1;i<=dig;i++){
        printf("%d x %d = %d
",num,i,(num*i));
        i++;
    }
    return 0;
}