#include<stdio.h>
int main(){
    int n=436;
    int sum=0;
    for(int i=1;i<n;i++){
        if (n%i==0){
           sum=sum+i;
        }
    }
    if (sum==n){
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number");
    }
    
}