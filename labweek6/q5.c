#include<stdio.h>
#include<string.h>
int main(){
    char Str[200];
    fgets(Str, sizeof Str, stdin);
    int j=0,ctr=0;
    char newstr[20][40]; 
    for(int i=0;i<=strlen(Str);i++){
        if((Str[i]==' ' && Str[i+1]!=' ')|| Str[i]!='\0' ){
           newstr[j][ctr]='\0';
           j++;
           ctr=0;
        }
        else{
           newstr[j][ctr]=Str[i];
           ctr++;
        }        
    }
    for(int i=0;i<j;i++){//to print the string
        printf(" %s\n",newstr[i]);
    }
}