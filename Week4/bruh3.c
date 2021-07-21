#include<stdio.h>

int uniquenum(int *arr,int arrlen);
int unique(int n,int *arr,int arrlen);

int main(){
    int arrlen;
    printf("Enter length of array :");
    scanf("%d",&arrlen);
    printf("\n\n");

    int arr[arrlen];
    for (int i = 0; i < arrlen; i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    printf("the unique elements found in the array are:");
    printf("No of unique elements: %d",uniquenum(arr,arrlen));
    return 0;



}