#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char newString[10][10]; 
    int i,j,ctr; 
    fgets(str1, sizeof str1, stdin);	

    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if((str1[i]==' ' && str1[i+1]!=' ')||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("enter word to be deleted");
    char del[20];
    fgets(del, sizeof del,stdin);
    int flag=0;
    int i;
    for( i=0;i<ctr;i++){
         if(strcmp(del,newString[i])){
            flag=1;
            break;
         }  
    }
    while(i<ctr-1){
        strncpy(newString[i],newString[i+1]);
        i++;
    }
    
    return 0;
}