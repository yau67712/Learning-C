#include <stdio.h>

int main()
{
    int i,x,y,z;
    z=1;
    printf("please input :");
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
        z=z*x%1000;
    if(z>=100)
        printf("the last 3 number is:%d",z);
    else if(z<10)
        printf("the last 3 number is:00%d",z);
    else
        printf("the last 3 number is:0%d",z);
    return 0;
}
