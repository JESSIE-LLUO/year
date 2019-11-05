#include <stdio.h>

int main (void)
{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);

    if(year%4==0&&year%100!=0||year%400==0){
        printf("year is %d是闰年\n");
    }
    else{
        printf("year is %d不是闰年\n");
    }

    return 0;
}