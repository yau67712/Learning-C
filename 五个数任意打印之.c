#include  <stdio.h>
#include  <stdlib.h>


void input(int  x[],int  n)
{
    int  i;
    printf("please input %d  number :\n",n);
    for(i=0; i<n; i++)
    {
        printf("\n please input no%d:",i+1);
        scanf("%d",&x[i]);
    }
}
void  print(int x[],int n)
{
    int i;
    printf("the result is  :");
    for(i=0; i<n; i++)
    {
        printf("%d    ",x[i]);
    }
}

void  paixu(int  x[],int  n)
{
    int  i,j,temp;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(x[i]<x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
}

int  main()
{
    int  a[5];
    input(a,5);
    paixu(a,5);
    print(a,5);
    system("pause");
    return  0;
}
