#include<stdio.h>

//prototype
int reverse(int a);

int main(){
    int a;
    
    printf("Enter your number:");
    scanf("%d",&a);
    printf("Number  %d ",a);
    if (a==reverse(a))
    {
        printf("is a palindrome.");
    
    }else printf("is not a palindrome");
    
    return 0;

}

int reverse(int c){
    int b;
    b=0;
    while(c){
        b=(b*10)+(c%10);
        c=(c-(c%10))/10;
    }

    return b;
}