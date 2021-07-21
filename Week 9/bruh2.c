#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *file1;
    file1=fopen("bruh2_1.txt","w");

    int num,i;

    printf("ENTER THE NO OF LINES:");
    scanf("%d",&num);

    char str[255];
    printf("ENTER LINES:\n");

    for (i = 0; i < num+1; i++)
    {
        fgets(str,sizeof str,stdin);
        fputs(str,file1);
    }

    fclose(file1);


}