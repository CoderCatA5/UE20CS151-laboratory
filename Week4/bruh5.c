#include<stdio.h>

int checkprime(int n);
int nextprime(int n);

int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("\n\n");

    printf("IFPRIME: %d\n",checkprime(n));
    printf("NEXT PRIME: %d",nextprime(n));

    return 0;
}