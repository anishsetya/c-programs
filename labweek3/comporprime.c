#include<stdio.h>
int main(){
    int n,comp,prime;
    comp=0;
    prime=0;
    int flag;
    do{
       printf("enter number");
       scanf("%d", &n);
       flag=0;
       for(int i=2;i<n/2;i++){
         if(n%i==0){
            flag=1;
            comp++;
            break;
        }
       }
        if (n>=2){
         if (flag==0){
           prime++;
         }
     }
    }while(n!=-1);
    printf("number of prime numbers=%d , composite=%d", prime, comp);
    return 0;
}