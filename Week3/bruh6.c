#include<stdio.h>


int series(int num);
int fact(int num);

int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    printf("The sum of series is: %d",series(a));
    return 0;

}
int fact(int num){
    int i,ans=1;
    for ( i = 1; i <= num; i++)
    {
        ans*=i;
    }
    return ans;
    
}
int series(int num){
    if(num==1){
        return 1;
    }
    else{
        return (fact(num)/num)+series(num-1);
    }
}
