#include <stdio.h>
int main£¨ £©
{
char  ch[7]={"65AB21"}£»
       int  i£¬s=0£»
       for£¨i=0£»ch[i]>=¡¯0¡¯ && ch[i]<=¡¯9¡¯£»i=i+2£©
              s=10*s+ch[i]-'0'£»
printf£¨"%d\n"£¬s£©£»
return 0£»
}
