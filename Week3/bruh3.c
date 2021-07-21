#include <stdio.h>
#include<math.h>

//prototype
int arm(int num);
int perfectnum(int num);

int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    arm(a);
    perfectnum(a);
  
}
int arm(int num){
    int b=num;
    int sum=0;
    int c;

    while(b){
        sum=sum+pow((b%10),3);
        b=(b-b%10)/10;
    }
    if(num==sum){
        printf("The number %d is an Armstrong number.\n",sum);
    }
    else printf("The number %d is not an Armstrong number.\n",num);
    return 0;
}
int perfectnum(int num){
    int sum=0;
    int i;
    
    for ( i = 1; i < num; i++)
    {
        
        if(num%i==0){
            sum+=i;
        }
    }
    if (sum==num){
        printf("The number %d is a Perfect number.\n",num);
    }else printf("The number %d is not a Perfect number.\n",num);


}
