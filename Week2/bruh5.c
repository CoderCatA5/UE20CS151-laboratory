#include<stdio.h>

int main(){
    float a,b;
    char op;
    
    printf("Enter ur expression(a op b):");
    scanf("%f %c %f",&a,&op,&b);

    switch (op)
    {
    case '+':
        printf("%2.1f %c %2.1f = %2.1f\n",a,op,b,a+b);
        break;
    case '-':
        printf("%2.1f %c %2.1f = %2.1f\n",a,op,b,a-b);
        break;
    case '*':
        printf("%2.1f %c %2.1f = %2.1f\n",a,op,b,a*b);
        break;
    case '/':
        printf("%2.1f %c %2.1f = %2.1f\n",a,op,b,a/b);
        break;
    
    default:
        printf("Wrong operator:\n");
        return 0;
        break;
    }
    return 0;

}