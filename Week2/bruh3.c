#include<stdio.h>
int main(){
    int a,n;
    printf("Enter the number which you want check:");
    scanf("%d",&a);
    printf("Input number is :%d\n\n\n",a);


    printf("Enter the bit position,from 0:");
    scanf("%d",&n);
    if(a==(a|1<<n)){
        printf("Bit is set:\n\n\n");
    }else{
        printf("Bit is not set:\n\n\n");
    }
    
    
    printf("Enter the bit position,the bit u want to set:");
    scanf("%d",&n);
    printf("SET:%d\n",1<<n);
    a=(a|1<<n);
    printf("The number after SET:%d\n\n\n",a);


    printf("Enter the bit position, the bit to be cleared:");
    scanf("%d",&n);
    if(a==(a|1<<n)){
        a=a-(1<<n);
    }
    printf("Number after clear: %d",a);
    return 0;

}