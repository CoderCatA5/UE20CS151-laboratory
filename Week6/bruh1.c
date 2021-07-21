#include<stdio.h>
#include<stdlib.h>

int main(){
    int n_lines;
    printf("Enter the no. of lines:");
    scanf("%d",&n_lines);

    //init
    int arr[n_lines][n_lines];
    for(int i=0;i<n_lines;i++){
        for (int j = 0; j < n_lines; j++)
        {
            arr[i][j]=0;
            arr[i][0]=1;
            arr[i][i]=1;
        }
    
    }
    for (int i = 2; i < n_lines; i++)
    {
        for (int j = 1; j < n_lines; j++)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }    
    }
    
    //printing the array
    for (int i = 0; i < n_lines; i++)
    {
        for (int j = 0; j < n_lines; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}