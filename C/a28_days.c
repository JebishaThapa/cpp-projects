#include <stdio.h>

int main(){
    int year,month,week,day;

    printf("Input no of days: ");
    scanf("%d", &day);

    year = day/365;
    day = day % 365;
    month = day/30;
    day = day%30;
    week = day/7;
    day = day% 7;

    printf("year: %d\nmonth: %d\nweek: %d\nday: %d",year, month, week, day);
    return 0;

}