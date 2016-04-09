#include  <stdio.h>
#include  <stdlib.h>

int  main()
{
        int  s[41],i;
        s[1]=1;
        s[2]=1;
        for(i=3;i<=40;i++)
        {
                s[i]=s[i-1]+s[i-2];
        }
        for(i=1;i<=40;i++)
        {
                printf("%12d",s[i]);
                if(i%3==0)
                printf("\n");
        }
        return  0;
}
