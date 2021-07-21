#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
    //initializing the first two files
    FILE *file1;
    FILE *file2;
    file1=fopen("bruh1_1.txt","w+");
    file2=fopen("bruh1_2.txt","w+");
    fprintf(file1,"Hi,Good morning\nHave a nice Day!\n");
    fprintf(file2,"Welcome to C Programming");
    fclose(file1);
    fclose(file2);


    FILE *read1;
    FILE *read2;
    FILE *file3;
    read1=fopen("bruh1_1.txt","r+");
    read2=fopen("bruh1_2.txt","r+");

    file3=fopen("bruh3_3.txt","w");

    char str[255];
    
    while (fgets(str,255,read1))fputs(str,file3);
    fclose(read1);

    while (fgets(str,255,read2))fputs(str,file3);
    fclose(read2);

    fclose(file3);
    
    return 0;
}