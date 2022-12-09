#include<stdio.h>
int main (){
   int ul,ll,prime,flag;
   
   printf("enter the lower and upper limit respectively");
   scanf("%d %d", &ll, &ul);
   printf("the prime numbers between %d and %d are:", ul, ll);
   while(ll<ul){
     flag=0;
     for(int i=2;i<ll/2;i++){
         if(ll%i==0){
            flag=1;
            break;
            
        }
     }
     if (flag==0 && ll>=2){
        printf("%d \n",ll);
     }
     
     ll++;
   }
   return 0;
}