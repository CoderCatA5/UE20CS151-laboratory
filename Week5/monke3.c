#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int in(char *input,char find,int strlen){
    int i=0;
    while (i<strlen)
    {
        if (input[i]==find)return 1;
        i++;
    }

    return 0;
}

void removeduplicates(char *input,int strlen){
    char dump[strlen];
    int index=0;

    for (int i = 0; i < strlen; i++)
    {
      
        if (in(dump,input[i],strlen))
        {
            input[i]='\0';
        }
        else{
            dump[index]=input[i];
            index++;
        }
        
    }
    char ans[strlen];
    int count=0;
    for (int i = 0; i < strlen; i++)
    {
        
        if(input[i]!='\0'){
            ans[count]=input[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%c",ans[i]);
    }
    
    
    
}