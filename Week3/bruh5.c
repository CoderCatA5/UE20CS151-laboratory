#include<stdio.h>

int octal(int a);
int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    printf("OCTAL FORM: %d",octal(a));
}

int octal(int a){
    int quo,rem;
    quo=(a-a%8)/8;
    rem=a%8;
    if (quo==0){
        return rem;
    }
    else{
        return octal(quo)*10+rem;
    }
}