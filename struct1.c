#include <stdio.h>
#include <stdlib.h>
struct sta
{
    int num;
    char name[6];
    char sex;
    int computer;
};
int main()
{
    int n,max;
    struct sta st[3]={
    {101,"sarah",'f',60},
    {102,"john",'m',90},
    {103,"jane",'f',75}
    };
    max=st[0].computer;
    for(n=1;n<3;n++)
    {
        if(st[n].computer>=max)
            max=st[n].computer;
    }
    printf("the highest computer score is:%d",max);
    return 0;
}
