#include  <stdio.h>
#include  <stdlib.h>

int  main()
{
        int  i,temp;
        int  a[];
        printf("please  input!\n")
        for(i=0;i<10;i++)
        {
                printf("please  input  No:%d\n"i+1);
                scanf("%d",&a[i]);
        }
        for(i=o;i<=5;i++)
        {
                temp=a[i];
                a[i]=a[9-i];
                a[9-i]=temp;
        }
        printf("the  last  paixu;\n");
        for(i=0;i<=10;i++)
                printf("%d",a[i];)
        return  0;
}
