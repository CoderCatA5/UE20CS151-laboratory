
#include<stdio.h>

struct complex
{
    float real;
    float imaginary;

};

int main(){
    struct complex c1,c2,sum,diff;
    

    printf("Enter real and imaginary:");
    scanf("%f %f",&c1.real,&c1.imaginary);
    printf("Enter real and imaginary:");
    scanf("%f %f",&c2.real,&c2.imaginary);


    sum.real=c1.real+c2.real;
    sum.imaginary=c1.imaginary+c2.imaginary;

    diff.real=c1.real-c2.real;
    diff.imaginary=c1.imaginary-c2.imaginary;

    printf("SUM = %f %f \n",sum.real,sum.imaginary);
    printf("DIFF = %f %f i",diff.real,diff.imaginary);

    return 0;
}
