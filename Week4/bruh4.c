#include<stdio.h>

int powe(int base,int num);

int main(){
    int base ,num;
    printf("Enter base and num:");
    scanf("%d %d",&base,&num);

    printf("The value of %d to the power of %d is : %d",base,num,powe(base,num));
    return 0;

}