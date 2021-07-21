#include<stdio.h>
int pyramid(int a);
int multable(int a);


int main(){
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    pyramid(a);
    printf("\n\n");
    multable(a);

    return 0;
}
int pyramid(int a){
    int i,j;
    for ( i = 1; i <= a; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    
    }
    return 0;
}
int multable(int a){
    int i;
    for( i = 1; i <= 10; i++)
    {
        printf("%d\n",a*i);
    }
    return 0;
}    