#include<stdio.h>
int main(){
    int x=0,n;
    char s[3];
    scanf("%d",&n);
    while(n>0){
        scanf("%s",s);
        if(s[0]=='+'||s[2]=='+')
        x+=1;
        else if(s[0]=='-'||s[2]=='-')
        x-=1;
        n--;
    }
    printf("%d",x);
    return 0;
    
}
