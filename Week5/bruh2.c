#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/*
functions needed strcompare,revstring
*/
void replacechr(char *input,char find,char replace,int strlen);

int main(){
    char input[256];
    printf("Enter your string:");
    scanf("%[^\n]%*c",input);
    
    int strlen = 0;
    for (int i = 0; i < 256; i++)
    {
        
        if (input[i]=='\0')break;
        strlen++;
    }

    char find;
    char replace;

    printf("FIND REPLACE:");
    scanf("%c %c",&find,&replace);

    printf("BEFORE:%s\n",input);
    replacechr(input,find,replace,strlen);
    printf("AFTER:%s",input);
    

    return 0;
}