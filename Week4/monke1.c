#include<stdio.h>


void revarr(int *arr,int arrlenght){
    for (int  i = 0; i < arrlenght; i++)

    {
        printf("%d ",arr[arrlenght-1-i]);
    }
    printf("\n");
    
}
void revpointer(int *arr,int arrlenght){
    int *fadress=arr+arrlenght-1;
    do{
        printf("%d ",*fadress);
        fadress--;
    }while(fadress != arr-1);
    printf("\n");
}