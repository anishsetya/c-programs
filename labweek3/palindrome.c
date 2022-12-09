#include <stdio.h>
void  main(){
    int n,rev,n1;
    rev=0;
    printf("enter a number to check for palindrome");
    scanf("%d", &n);
    n1=n;
    while (n>0){
       rev=rev*10 +n%10;
       n=n/10;
    }
    if (rev==n1) 
       printf("%d is a paloindrome", n1);
    else 
        printf("%d is not a palindrome", n1);
     
}