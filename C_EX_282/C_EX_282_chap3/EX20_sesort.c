#include <stdio.h>
#include <stdlib.h>

void sesort(int s[],int n)
{
    int i,j,d;
    d=d/2;
    while(d>=1)
    {
        for(i=d+1;i<=n;i++)
        {
            s[0]=s[i];
            j=i-d;
            while((j>0)&&s[0]<s[j])
            {
                s[j+d]=s[j];
                j=j-d;
            }
            s[j+d]=s[0];
        }
        d/=2;
    }
}


void input(int s[],int n)
{
    int i;
    printf("please input string:");
    for(i=1;i<=n;i++)
        scanf("%d",&s[i]);
}

void output(int s[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        {
            printf("%6d",s[i]);
            if(i%5==0)
                printf("\n");
        }
}

int main()

{
    int s[11];
    input(s,10);
    sesort(s,10);
    output(s,10);
    system("pause");
    return 0;
}

