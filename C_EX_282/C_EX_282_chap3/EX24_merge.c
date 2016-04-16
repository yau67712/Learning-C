#include <stdio.h>
#include <stdlib.h>

void merge(int r[],int s[],int x1,int x2,int x3)
{
    int i,j,k;
    i=x1;
    j=x2+1;
    k=x1;
    while((i<=x2)&&(j<=x3))
        if(r[i]<=r[j])
        {
            s[k]=r[i];
            i++;
            k++;
        }
        else
        {
            s[k]=r[j];
            j++;
            k++;
        }
    while(i<=x2)
        s[k++]=r[i++];
    while(j<=x3)
        s[k++]=r[j++];
}


void merge_sort(int r[],int s[],int m,int n)

{
    int p;
    int t[20];
    if(m==n)
        s[m]=r[m];
    else
    {
        p=(m+n)/2;
        merge_sort(r,t,m,p);
        merge_sort(r,t,p+1,n);
        merge(t,s,m,p,n);
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
    merge_sort(s,s,1,10);
    output(s,10);
    system("pause");
    return 0;
}
