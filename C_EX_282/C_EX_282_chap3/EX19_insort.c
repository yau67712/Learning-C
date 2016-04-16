#include <stdio.h>
#include <stdlib.h>

void insort(int s[],int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        s[0]=s[i];
        j=i-1;
        while(s[0]<s[j])
        {
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=s[0];
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
    insort(s,10);
    output(s,10);
    system("pause");
    return 0;
}
