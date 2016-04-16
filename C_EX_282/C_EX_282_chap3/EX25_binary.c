#include <stdio.h>


void binary_search(int key,int a[],int n)
{
    int low,mid,high,count=0,flag=0;
    low=0;
    high=n-1;
    while(low<high)
    {
        count++;
        mid=(low+high)/2;
        if(key<a[mid])
            high=mid-1;
        else if(key>a[mid])
            low=mid+1;
        else if(key==a[mid])
        {
            printf("successful!found %d times,a[%d]:%d ",count,mid,key);
            flag++;
            break;
        }
    }
        if(flag==0)
        printf("no found!");
}


int main()

{
    int i,a[50],key,n;
    printf("how much char at the string:");
    scanf("%d",&n);
    printf("\nplease input the string:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[n]);
    printf("please input your key:");
    scanf("%d",&key);
    binary_search(key,a,n);
    system("pause");
    return 0;
}
