#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    float sum,term,x;
    printf("enter the values of the number of n andn x");
    scanf("%d", &n);
    scanf("%f", &x);
    x=x*3.14/180.0;
    sum=x;
    for(i=1;i<n;i++){
        int term=2*i-1;
        int fact=1;
        for(int j=1;j<=term;j++){
            fact=j*fact;
        }
        printf("%d \n",fact);
        if(i%2!=0)
           sum+= pow(x,term)/fact;
        else 
           sum-= pow(x,term)/fact;
    }
    printf("%f",sum);

}