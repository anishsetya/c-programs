#include<stdio.h>
#include<math.h>
int main(){
    int n,arm,n1;
    printf("enter a number");
    scanf("%d", &n);
    n1=n;
    arm=0;
    while(n>0){
        int temp=pow((n%10),3); 
        arm+= temp;
        n=n/10;
    }
    if (arm==n1)
       printf("%d is a armstrong number",arm);
    else 
       printf("%d is not a armstrong number",n1);
    return 0;
}