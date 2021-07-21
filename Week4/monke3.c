#include<stdio.h>

int unique(int n,int *arr,int arrlen){
    int count=0;
    for (int i = 0; i < arrlen; i++)
    {
        if(n==arr[i]){
            count++;
            if (count>1)
            {
                return 0;
            }  
        }
    }
    if (count==1) return 1;
    return 0;
}

int uniquenum(int *arr,int arrlen){
    int count=0;
    for (int i = 0; i < arrlen; i++)
    {
        if(unique(arr[i],arr,arrlen)==1){
            printf(" %d ",arr[i]);
            count++;
        }
    }
    printf("\n");
    return count;

}
    

