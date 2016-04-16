#include <stdio.h>

int pin_or_run(int year)

{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 1;
    else
        return 0;
}

int totul_day(int year,int month,int day)

{
    int i,sum=0;
    int pin[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if(pin_or_run(year)==1){
        for(i=1;++i<=month;)
            sum+=run[i-2];}
    else{
        for(i=1;++i<=month;)
            sum+=pin[i-2];}
    sum+=day;
    return sum;
}

int main()

{
    int year,month,day,sum;
    printf("please input the date:");
    scanf("%d %d %d",&year,&month,&day);
    sum=totul_day(year,month,day);
    printf("the all day is:%d",sum);
    return 0;
}

