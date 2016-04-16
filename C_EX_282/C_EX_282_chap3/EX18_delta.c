#include <stdio.h>
#include <time.h>

int main()

{
    float a,b,c,n,s;
    printf("please input 3 sides of delta:");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c&&b+c>a&&a+c>b)==0){
        printf("the 3 sides can't be a delta");
        return 0;}
    else if(a==b&&b==c)
        printf("the delta is equilateral\n");
    else if(a==b||b==c||a==c)
        printf("the delta is isosceles\n");
    else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
        printf("the delta is right angled\n");
         else
            printf("the delta is simple\n");
    n=(a+b+c)/2;
    s=sqrt(n*(n-a)*(n-b)*(n-c));
    printf("s = %.3f",s);
    return 0;
}
