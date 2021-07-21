#include<stdio.h>
int fact(int n);

int main(){
    int n,r;
    printf("Enter n and r:");
    scanf("%d %d",&n,&r);

    int ans=fact(n)/(fact(n-r)*fact(r));
    printf("nCr = %d",ans);
    return 0;
    

}