#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void revstring(char *input,char *output,int strlen){


    for (int i = 0; i < strlen; i++)
    {
        output[i]=input[strlen-1-i];
    }
}

int strcompare(char *input,char *output,int strlen){

    for (int  i = 0; i < strlen; i++)
    {
        if(input[i]!=output[i])return 0;
    }
    return 1;
    
}
