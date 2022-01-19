#include <stdio.h>

int main()
{
   int num;
   scanf("%d",&num);
   int i; int t=0;
   for(i=2;i<num;i++){
       if(num%i==0){
       printf("not a prime");
       t=1;
       break;
       }
   }
    if(t!=1){
       printf("prime");
       }
       
   
    return 0;
}