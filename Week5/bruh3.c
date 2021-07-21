#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/*
functions needed strcompare,revstring
*/
void removeduplicates(char *input,int strlen);

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
    removeduplicates(input,strlen);



}