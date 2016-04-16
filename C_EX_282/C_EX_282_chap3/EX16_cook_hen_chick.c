#include <stdio.h>


int main()

{
    int cook,hen,chick;
    for(cook=0;cook<=100;cook++)
        for(hen=0;hen<=100;hen++)
            for(chick=0;chick<=100;chick++)
                if(cook+hen+chick==100&&15*cook+9*hen+chick==300)
                    {
                        printf("cook have:%d;\n",cook);
                        printf("hen have:%d;\n",hen);
                        printf("chick have:%d;\n",chick);
                    }
    return 0;
}
