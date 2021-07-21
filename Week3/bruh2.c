#include <stdio.h>

//prototype
int highest(int arr[]);
int gcd(int arr[],int high);


int main(){
    
    int arr[3];
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);

    printf("GCD(%d,%d,%d)= %d",arr[0],arr[1],arr[2],gcd(arr,highest(arr)));

    highest(arr);

}
int highest(int arr[]){
    
    int ans=arr[0];
    for ( int i = 0; i < 3; i++)
    {
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    
    return ans;   
}
int gcd(int arr[],int high){
    int result;

    for (result = high; result >=1; result--)
    {
        if(arr[0]%result==0 && arr[1]%result==0 && arr[2]%result==0){
            break;
        }
    }
    
    return result;    
}