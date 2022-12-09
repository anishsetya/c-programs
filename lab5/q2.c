#include<stdio.h>
int main(){
    int arr[]={6,8,9,3,5,7,10,2,1,11};
    int l=sizeof(arr)/sizeof(int);
    printf(" %d", l);
    for (int i = 0; i < l - 1; i++)
      for (int j = 0; j < l - i - 1; j++)
        if (arr[j] > arr[j + 1]){
           int temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
    for (int i = 0; i < l; i++)
        printf("%d ", arr[i]);
}