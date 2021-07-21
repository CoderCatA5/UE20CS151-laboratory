#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/*
functions needed strcompare,revstring
*/
//prototyping
void revstring(char *input,char *output,int strlen);
int strcompare(char *input,char *output,int strlen);


int main(){
    char input[256];
    

    
    printf("Enter your string:");
    scanf("%[^\n]%*c",input);

  

    

    char revstr[strlen+1];
    revstr[strlen]='\0';

    revstring(input,revstr,strlen);
    printf("THE REVERSED STRING IS:%s\n",revstr);

    printf("IS PALINDROME %d",strcompare(input,revstr,strlen));

    return 0;

}


