#include<stdio.h>

//prototyping 
int upper(char str[]);
int main(){

    char sen[100];
    printf("Enter characters to convert case\n");
    //fgets(sen,100,stdin);
    scanf("%[^\n]s%",sen);
    upper(sen);
    return 0;

}

int upper(char str[]){
    int count=0;
    //"\0" is the ascii value NUL
    //ascii A=65 Z=90
    //91 to 96 symbols
    //a=97 to z=122
    while(str[count]!='\0'){

        if (str[count]>='a' && str[count]<='z'){
            str[count]-=32;
        }
        count++;
    }
    printf("%s",str);
    return 0;
}