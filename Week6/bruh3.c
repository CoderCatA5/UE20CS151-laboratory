#include<stdio.h>
#include<stdlib.h>
struct Date{
    int day;
    int month;
    int year;
}date1,date2;
int main(){

    

    printf("Enter date1 in format dd/mm/yy:");
    scanf("%d/%d/%d",&date1.day,&date1.month,&date1.year);

    printf("Enter date2 in format dd/mm/yy:");
    scanf("%d/%d/%d",&date2.day,&date2.month,&date2.year);

    printf("\nDATE1:%d/%d/%d\n",date1.day,date1.month,date1.year);
    printf("\nDATE2:%d/%d/%d\n",date2.day,date2.month,date2.year);

    int ans=(date2.year-date1.year)*365+(date2.month-date1.month)*31+(date2.day-date1.day);

    if(ans<0)printf("Date1 is larger than date2");
    else printf("Date1 is smaller than date2");

}