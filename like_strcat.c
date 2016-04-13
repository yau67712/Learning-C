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
    int n,i,j;
    struct sta st[3]={
    {101,"sarah",'f',60},
    {102,"john",'m',90},
    {103,"jane",'f',75}
    };
    for(n=1,i=0;n<=3;n++)
    {
        if(st[n].sex=='m')
            i++;
    }
    j=3-i;
    printf("girl number is:%d,boy number is:%d",j,i);
    return 0;
}
