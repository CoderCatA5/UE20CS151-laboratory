#include<stdio.h>

void revarr(int *arr,int arrlenght);
void revpointer(int *arr,int arrlenght);

int main(){
    int arrlenght;
    printf("Enter lenght of array :");
    scanf("%d",&arrlenght);
    printf("\n\n");

    int arr[arrlenght];
    for (int i = 0; i < arrlenght; i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    revarr(arr,arrlenght);
    revpointer(arr,arrlenght);

    return 0;
}