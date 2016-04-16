#include <stdio.h>
#include <stdlib.h>

void qusort(int s[],int start,int end)
{
    int i,j;
    i=start;
    j=end;
    s[0]=s[start];
    while(i<j)
    {
        while(i<j&&s[0]<s[j])
            j--;
        if(i<j)
        {
            s[i]=s[j];
            i++;
        }
        while(i<j&&s[i]<=s[0])
            i++;
        if(i<j)
        {
            s[j]=s[i];
            j--;
        }
    }
    s[i]=s[0];
    if(start<i)
        qusort(s,start,j-1);
    if(i<end)
        qusort(s,j+1,end);
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
    qusort(s,1,10);
    output(s,10);
    system("pause");
    return 0;
}
