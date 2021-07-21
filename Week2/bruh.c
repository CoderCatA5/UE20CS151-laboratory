#include<stdio.h>
int main(){
    int a;
    char grade;

    printf("Enter your Marks:");
    scanf("%d",&a);
    if (a>85&&a<=100)
    {
        grade='A';
    } else if (a>60&&a<=85)
    {
        grade='B';
    }
    else if (a>40&&a<=60)
    {
        grade='C';
    }
    else if (a>=30&&a<=40)
    {
        grade='D';
    }else if (a<30)
    {
        grade='F';
    }
    else{
        printf("INVALID MARKS TRY AGAIN\n");
        return main();
    }
    printf("You got grade %c",grade);
    return 0;
}