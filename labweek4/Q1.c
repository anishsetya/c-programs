#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n, &k);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
             int product=i*j;
             printf(" %d ",product);
        }
        printf("\n");
    }
    return 0;
}