#include <stdio.h>

int nextday(int day,int mon,int year,int lis[12]);
int main()
{
    int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day, month, year;

    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year:");
    scanf("%d", &year);

    // leap year change feb to 29
    if ( year > 0 && 
        year % 4 == 0 && 
        year % 400 == 0)
    {
        m[1] = 29;
    }

    //limits for date
    if ((year >= 0) && 
    (month >= 1 && month <= 12) && 
    (day >= 1 && day <= m[month-1]))
    {
        printf("Date is Valid.\n");
    }
    else
    {
        printf("Date is Invalid\n");
        return 0;
    }
    nextday(day,month,year,m);
    return 0;
}
int nextday(int day,int mon,int year,int lis[12]){
    int newday,newm,newyear;
    if (day<lis[mon-1]){
        newday=day+1;
        newm=mon;
        newyear=year;
    }else{
        newday=1;
        newm=mon+1;
        if(newm<13){
            newyear=year;
        }else{
            newyear=year+1;
            newm=1;
        }
    }
    printf("NEXT DAY IS:%d %d %d",newday,newm,newyear);
    return 0;
}