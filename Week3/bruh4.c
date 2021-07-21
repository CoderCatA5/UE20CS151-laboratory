#include<stdio.h>

//prototype
int primenum(int a);
int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    primenum(a);
    
    return 0;
}
int primenum(int a){
    int ans=0;
    if (a>1){    
        for (int i = 2; i <= a/2; i++)
        {
            if (a%i==0)
            {
                ans=1;
                break;
            }
        }
    }else{
        printf("1 is not prime:");
    }
    if(ans){
        printf("The number %d is not a prime Number",a);
    }else printf("The number %d is a prime Number",a);
    
}