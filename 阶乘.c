#include<stdio.h>
#include<stdlib.h>

long  jiecheng(int  x)
{
        int  i;
        long  u=1;
        for(i=1;i<=x;i++)
        {
                u=u*i;
        }
        return  u;
}

int  main()
{
        int  m,n;
        float  s;
        scanf("%d  %d",&m,&n);
        s=jiecheng(m)/(jiecheng(n)*jiecheng(m-n));
        printf("%f",s);
        return  0;
}
