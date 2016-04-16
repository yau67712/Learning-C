#include <stdio.h>


int main()

{
    int a,b,c;
    for(a=1;a<=3;a++)
        for(b=1;b<=3;b++)
            for(c=1;c<=3;c++)
                if(a!=1&&c!=1&&c!=3&&a!=b&&a!=c&&b!=c)
    {
        printf("A will marry %c\n",'X'+a-1);
        printf("B will marry %c\n",'X'+b-1);
        printf("C will marry %c\n",'X'+c-1);
    }
    return 0;
}
