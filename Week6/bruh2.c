#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int checksymmetry(int *arr,int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (*((arr+i*col)+j)!=*((arr+j*col)+i))return 0;
        }
        
    }
    return 1;

}
void printmat(int *arr,int row,int col){
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<col;j++){
            printf("%d ",*((arr+i*col) + j));//pointer arr is first element of first cell
                                             // arr+i*col are list of all first elements
                                             //(arr+i*col)+ j for all elements

        }
        printf("\n");
    }
    
}
int main(){
    int row,col;
    printf("Enter dimensions(rows cols):");
    scanf("%d %d",&row,&col);

    int arr[row][col];     
    for (int i=0;i<row;i++){    
        for (int j=0;j<col;j++){    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n\nIS SYMMETRIC: %d\n\n",checksymmetry((int *)arr,row,col));
    printmat((int *)arr,row,col);
  
}
