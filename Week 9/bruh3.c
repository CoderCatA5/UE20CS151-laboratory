#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int *arr,int n){
    int j;
    int temp;
    for(int i=0;i<n;i++){
        j=i-1;
        temp=arr[i];

        while (j>-1 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void display(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("ENTER NO OF NUMBERS:");
    scanf("%d",&n);

    int arr[n];
    printf("ENTER ELEMENTS:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    display(arr,n);
    InsertionSort(arr,n);
    display(arr,n);
    
    return 0;

    
}