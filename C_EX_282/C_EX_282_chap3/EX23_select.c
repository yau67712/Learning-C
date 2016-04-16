#include <stdio.h>
#include <stdlib.h>

void select(int s[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        {
            if(s[i]>s[j])
            {
                s[0]=s[j];
                s[j]=s[i];
                s[i]=s[0];
            }
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
    select(s,10);
    output(s,10);
    system("pause");
    return 0;
}
