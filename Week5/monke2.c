#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void replacechr(char *input,char find,char replace,int strlen){
    for (int i = 0; i < strlen; i++)
    {
        if (input[i]==find)input[i]=replace;    
    }
}