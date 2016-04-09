#include <stdio.h>


int  shuixian(int  x)
{
        int  a,b,c;
        int  flag=0;
        a=x/100;
        b=x%100/10;
        c=x%10;
        if(x==a*a*a+b*b*b+c*c*c)
              {
                      flag=1;
              }
        return  (flag);
}

int  main()
{
        int  m,flag;
        for(m=100;m<=999;m++)
        {
              if(shuixian(m)==1)
                printf("%d  ",m);
        }
        return  0;
}
