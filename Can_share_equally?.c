#include<stdio.h>
int main(){
    long long a,b;
    scanf("%ld  %ld",&a,&b);
    if((a%2==0) && (a>0 || b%2==0))
    printf("YES");
    else
    printf("NO");
    return 0;
}
