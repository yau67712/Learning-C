#include  <stdio.h>
#include  <stdlib.h>


int  main()
{
        int  a[10],i,min,n;
        printf("please  input  10  num");
        for(i=0;i<10;i++)
        {
                printf("please  input  num  :%d\n",i+1);
                scanf("%d",&a[i]);
        }
        min  =  a[0];
        for(i=1;i<10;i++)
        {
                if(a[i]>a[0])
                {
                        n=i;
                        a[0]=a[i];
                }
        }
        printf("max=%d,xiabiao  :%d  ",a[0],n);
        return  0;
}
