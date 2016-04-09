#include <stdio.h>
#include <stdlib.h>
#define h_m 60

int main()
{
    int min,hour;
    printf("please input an number for minute:");
    scanf("%d",&min);
    while(min>0)
    {
        hour=min / h_m ;
        min=min % h_m ;
        printf("\nthe time is :%d hour and %d minute",hour,min);
        printf("\nplease input next number:");
        scanf("%d",&min);
    }
    return 0;
}
